#version 330 core

// Input vertex data, different for all executions of this shader.
layout(location = 0) in vec3 vertexPosition;
layout (location = 1) in vec2 aTexCoord;
layout (location = 2) in vec3 aNormal;

out vec4 color;
out vec2 TexCoords; 
out vec3 FragPos;  
out vec3 normal;

uniform vec4 new_color;
uniform vec2 coor;
uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
    gl_Position = projection * view * model * vec4( vertexPosition, 1.0);
    FragPos = vec3(model * vec4(vertexPosition, 1.0));
    normal = mat3(transpose(inverse(model))) * aNormal;  
    //color = new_color;
    TexCoords = aTexCoord + coor;
}
