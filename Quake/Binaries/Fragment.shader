#version 330 core

out vec4 FragColor;

in vec4 color;
in vec2 TexCoords;
in vec3 normal; 
in vec3 FragPos;  

struct Material {
    sampler2D diffuse;
    sampler2D specular;
    float     shininess;
}; 

struct Light {
    vec3  lightPosition;
    vec3  camPosition;
    vec3  direction;
    float innerCutOff;
    float outerCutOff;
  
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
	
    float constant;
    float linear;
    float quadratic;
};
  
uniform Light light;  
uniform Material material;
uniform vec3 viewPos;

void main()
{
    vec3 lightDir = normalize(light.camPosition - FragPos);    
 
    // ambient
    vec3 ambient  = light.ambient  * texture(material.diffuse, TexCoords).rgb;
  	
    // diffuse 
    vec3 norm = normalize(normal);
    float diff = max(dot(norm, lightDir), 0.0);
    vec3 diffuse  = light.diffuse  * diff * texture(material.diffuse, TexCoords).rgb; 
    
    // specular
    vec3 viewDir = normalize(viewPos - FragPos);
    vec3 reflectDir = reflect(-lightDir, norm);  
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), material.shininess);
    vec3 specular = light.specular * spec * texture(material.specular, TexCoords).rgb; 

    // spotlight (soft edges)
    float theta = dot(lightDir, normalize(-light.direction));
    float epsilon   = light.innerCutOff - light.outerCutOff;
    float intensity = clamp((theta - light.outerCutOff) / epsilon, 0.0, 1.0); 
    // ambient  *= intensity;
    diffuse  *= intensity;
    specular *= intensity;

    // attenuation
    float distance = length(lightDir);
    float attenuation = 1.0 / (light.constant + light.linear * distance + light.quadratic * (distance * distance));    

    vec3 result = (ambient + diffuse + specular) * attenuation;

    FragColor = vec4(result, 1.0);
}   