#include "EngineWindow.h"
#include <Source/common/shader.hpp>
#include "stb_image.h"

EngineWindow::EngineWindow()
{
	title = "Quake";
	size = vec2(1920, 1080);
	bgColor = vec4(0.0f, 0.0f, 0.0f, 0.5f);

	yaw = -90.f;
	pitch = 0.f;
	fov = 90.f;
	cameraPos = vec3(0.0f, 0.0f, 5.0f);
	cameraFront = vec3(0.0f, 0.0f, -1.0f);
	cameraUp = vec3(0.0f, 1.0f, 0.0f);
	lightPos = vec3(0.0f, 2.0f, 0.0f);
}

EngineWindow::~EngineWindow()
{
}

void EngineWindow::Start()
{
	InitGLFW();
	Program();
	Light();
	Texture();
}

void EngineWindow::InitGLFW()
{
	if (!glfwInit())
	{
		std::cout << "Failed to initialize GLFW" << std::endl;
		return;
	}

	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Open a window and create its OpenGL context
	window = glfwCreateWindow(size.x, size.y, title.c_str(), NULL, NULL);
	if (window == NULL) {
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return;
	}
	glfwMakeContextCurrent(window);

	// Initialize GLEW
	glewExperimental = true; // Needed for core profile
	if (glewInit() != GLEW_OK) {
		std::cout << "Failed to initialize GLAD" << std::endl;
		glfwTerminate();
		return;
	}

	programID = LoadShaders("Vertex.shader", "Fragment.shader");
	lightID = LoadShaders("Vertex_light.shader", "Fragment_Light.shader");

	// Background
	glClearColor(bgColor.r, bgColor.g, bgColor.b, bgColor.a);
	// Ensure we can capture the escape key being pressed below
	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
	// Input callback
	glfwSetWindowUserPointer(window, this);
	glfwSetCursorPosCallback(window, genericCallback(onWindowMouseCallback));
	glfwSetScrollCallback(window, genericCallback(onWindowScrollCallback));
}

void EngineWindow::Program()
{

#pragma region Fusée
	//float vertices[] = {
	//	//Pos				    Color				Text coord
	//	 -0.5f, -0.5f, 0.0f,	1.0f, 0.0f, 0.0f, //Gauche
	//	 -0.5f, 0.0f, 0.0f,		0.0f, 1.0f, 0.0f,
	//	 -0.25f, 0.0f, 0.0f,	0.0f, 1.0f, 0.0f,
	//	 -0.25f, -0.5f, 0.0f,	0.0f, 1.0f, 1.0f,
	//	 0.5f, -0.5f, 0.0f,		0.0f, 1.0f, 0.0f, //Droite
	//	 0.5f, 0.0f, 0.0f,		0.0f, 0.0f, 1.0f,
	//	 0.25f, 0.0f, 0.0f,		1.0f, 0.0f, 0.0f,
	//	 0.25f, -0.5f, 0.0f,	1.0f, 0.0f, 1.0f,
	//	 0.0f, 1.0f, 0.0f,		0.0f, 0.0f, 1.0f, //Milieu
	//};

	//unsigned int indices[] = {  // note that we start from 0!
	//	0, 1, 2,    // G
	//	0, 2, 3,    // G
	//	4, 5, 6,    // D
	//	4, 6, 7,    // D
	//	2, 8, 6   // M
	//};

	//glGenVertexArrays(1, &VAO);
	//glBindVertexArray(VAO);

	//glGenBuffers(1, &VBO);
	//glBindBuffer(GL_ARRAY_BUFFER, VBO);
	//glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	//glGenBuffers(1, &EBO);
	//glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	//glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	//// position attribute
	//glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
	//glEnableVertexAttribArray(0);
	//// color attribute
	//glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
	//glEnableVertexAttribArray(1);
#pragma endregion

#pragma region Cube
	float vertices[] = {
		-0.5f, -0.5f, -0.5f,	0.0f, 0.0f,		0.0f,  0.0f, -1.0f,  //0
		0.5f, -0.5f, -0.5f,		1.0f, 0.0f,		0.0f,  0.0f, -1.0f,  //1
		0.5f,  0.5f, -0.5f,		1.0f, 1.0f,		0.0f,  0.0f, -1.0f,  //2
		-0.5f,  0.5f, -0.5f,	0.0f, 1.0f,		0.0f,  0.0f, -1.0f,  //3

		-0.5f, -0.5f,  0.5f,	0.0f, 0.0f,		0.0f,  0.0f,  1.0f,  //4
		0.5f, -0.5f,  0.5f,		1.0f, 0.0f,		0.0f,  0.0f,  1.0f,  //5
		0.5f,  0.5f,  0.5f,		1.0f, 1.0f,		0.0f,  0.0f,  1.0f,  //6
		-0.5f,  0.5f,  0.5f,	0.0f, 1.0f,		0.0f,  0.0f,  1.0f,  //7

		-0.5f,  0.5f,  0.5f,	1.0f, 0.0f,		-1.0f,  0.0f,  0.0f,  //8
		-0.5f,  0.5f, -0.5f,	1.0f, 1.0f,		-1.0f,  0.0f,  0.0f,  //9
		-0.5f, -0.5f, -0.5f,	0.0f, 1.0f,		-1.0f,  0.0f,  0.0f,  //10
		-0.5f, -0.5f,  0.5f,	0.0f, 0.0f,		-1.0f,  0.0f,  0.0f,  //11

		0.5f,  0.5f,  0.5f,		1.0f, 0.0f,		1.0f,  0.0f,  0.0f,  //12
		0.5f,  0.5f, -0.5f,		1.0f, 1.0f,		1.0f,  0.0f,  0.0f,  //13
		0.5f, -0.5f, -0.5f,		0.0f, 1.0f,		1.0f,  0.0f,  0.0f,  //14
		0.5f, -0.5f,  0.5f,		0.0f, 0.0f,		1.0f,  0.0f,  0.0f,  //15

		-0.5f, -0.5f, -0.5f,	0.0f, 1.0f,		0.0f, -1.0f,  0.0f,  //16
		0.5f, -0.5f, -0.5f,		1.0f, 1.0f,		0.0f, -1.0f,  0.0f,  //17
		0.5f, -0.5f,  0.5f,		1.0f, 0.0f,		0.0f, -1.0f,  0.0f,  //18
		-0.5f, -0.5f,  0.5f,	0.0f, 0.0f,		0.0f, -1.0f,  0.0f,  //19

		-0.5f,  0.5f, -0.5f,	0.0f, 1.0f,		0.0f,  1.0f,  0.0f,  //20
		0.5f,  0.5f, -0.5f,		1.0f, 1.0f,		0.0f,  1.0f,  0.0f,  //21
		0.5f,  0.5f,  0.5f,		1.0f, 0.0f,		0.0f,  1.0f,  0.0f,  //22
		-0.5f,  0.5f,  0.5f,	0.0f, 0.0f,		0.0f,  1.0f,  0.0f,  //23
	};
	unsigned int indices[] = {
		0, 1, 2,    // 0.1
		0, 2, 3,    // 0.2

		4, 5, 6,    // 1.1
		4, 6, 7,    // 1.2

		8, 9, 10,    // 2.1
		8, 10, 11,    // 2.2

		12, 13, 14,    // 3.1
		12, 14, 15,    // 3.2

		16, 17, 18,    // 4.1
		16, 18, 19,    // 4.2

		20, 21, 22,    // 5.1
		20, 22, 23,    // 5.2
	};

	glGenVertexArrays(1, &cubeVAO);
	glBindVertexArray(cubeVAO);

	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glGenBuffers(1, &EBO);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// position attribute
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
	// texture coordonate
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3 * sizeof(float)));
	glEnableVertexAttribArray(1);
	// normal
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(5 * sizeof(float)));
	glEnableVertexAttribArray(2);
#pragma endregion
}

void EngineWindow::Light()
{
	float vertices[] = {
		-0.5f, -0.5f, -0.5f,  //0
		0.5f, -0.5f, -0.5f,   //1
		0.5f,  0.5f, -0.5f,   //2
		-0.5f,  0.5f, -0.5f,  //3

		-0.5f, -0.5f,  0.5f,  //4
		0.5f, -0.5f,  0.5f,   //5
		0.5f,  0.5f,  0.5f,   //6
		-0.5f,  0.5f,  0.5f,  //7

		-0.5f,  0.5f,  0.5f,  //8
		-0.5f,  0.5f, -0.5f,  //9
		-0.5f, -0.5f, -0.5f,  //10
		-0.5f, -0.5f,  0.5f,  //11

		0.5f,  0.5f,  0.5f,  //12
		0.5f,  0.5f, -0.5f,  //13
		0.5f, -0.5f, -0.5f,  //14
		0.5f, -0.5f,  0.5f,  //15

		-0.5f, -0.5f, -0.5f,  //16
		0.5f, -0.5f, -0.5f,    //17
		0.5f, -0.5f,  0.5f,    //18
		-0.5f, -0.5f,  0.5f,  //19

		-0.5f,  0.5f, -0.5f,  //20
		0.5f,  0.5f, -0.5f,   //21
		0.5f,  0.5f,  0.5f,   //22
		-0.5f,  0.5f,  0.5f,  //23
	};
	unsigned int indices[] = {
		0, 1, 2,    // 0.1
		0, 2, 3,    // 0.2

		4, 5, 6,    // 1.1
		4, 6, 7,    // 1.2

		8, 9, 10,    // 2.1
		8, 10, 11,    // 2.2

		12, 13, 14,    // 3.1
		12, 14, 15,    // 3.2

		16, 17, 18,    // 4.1
		16, 18, 19,    // 4.2

		20, 21, 22,    // 5.1
		20, 22, 23,    // 5.2
	};

	glGenVertexArrays(1, &lightVAO);
	glBindVertexArray(lightVAO);

	glGenBuffers(1, &l_VBO);
	glBindBuffer(GL_ARRAY_BUFFER, l_VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glGenBuffers(1, &l_EBO);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, l_EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// set the vertex attribute 
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
}

void EngineWindow::Texture()
{
	stbi_set_flip_vertically_on_load(true);

	glGenTextures(1, &texture1);
	glBindTexture(GL_TEXTURE_2D, texture1);
	int width, height, nrChannels;
	unsigned char* data = stbi_load("test2.png", &width, &height, &nrChannels, 0);
	if (data)
	{
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
		glGenerateMipmap(GL_TEXTURE_2D);
	}
	else
	{
		std::cout << "Failed to load texture" << std::endl;
	}
	stbi_image_free(data);

	glGenTextures(1, &texture2);
	glBindTexture(GL_TEXTURE_2D, texture2);
	data = stbi_load("test.png", &width, &height, &nrChannels, 0);
	if (data)
	{
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
		glGenerateMipmap(GL_TEXTURE_2D);
	}
	else
	{
		std::cout << "Failed to load texture" << std::endl;
	}
	stbi_image_free(data);

	glGenTextures(1, &texture3);
	glBindTexture(GL_TEXTURE_2D, texture3);
	data = stbi_load("test_specular.png", &width, &height, &nrChannels, 0);
	if (data)
	{
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
		glGenerateMipmap(GL_TEXTURE_2D);
	}
	else
	{
		std::cout << "Failed to load texture" << std::endl;
	}
	stbi_image_free(data);

	glBindTexture(GL_TEXTURE_2D, texture1);
	glBindTexture(GL_TEXTURE_2D, texture2);
	glBindTexture(GL_TEXTURE_2D, texture3);
	glUniform1i(glGetUniformLocation(programID, "texture1"), 0);
	glUniform1i(glGetUniformLocation(programID, "texture2"), 1);
	glUniform1i(glGetUniformLocation(programID, "texture3"), 2);

	glEnable(GL_DEPTH_TEST);
}

void EngineWindow::Update()
{
	UpdateWindow();
}

void EngineWindow::UpdateWindow()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	float timeValue = glfwGetTime() * 3.0f;
	float r = sin(timeValue);
	float g = cos(timeValue);
	float b = tan(timeValue);

#pragma region Camera
	const float cameraSpeed = 0.025f * glfwGetTime();
	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
		cameraPos += cameraSpeed * cameraFront;
	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
		cameraPos -= cameraSpeed * cameraFront;
	if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
		cameraPos -= normalize(cross(cameraFront, cameraUp)) * cameraSpeed;
	if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
		cameraPos += normalize(cross(cameraFront, cameraUp)) * cameraSpeed;
	if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS)
		cameraPos += cameraUp * cameraSpeed * 0.5f;
	if (glfwGetKey(window, GLFW_KEY_LEFT_ALT) == GLFW_PRESS)
		cameraPos -= cameraUp * cameraSpeed * 0.5f;

	vec3 direction;
	direction.x = cos(radians(yaw)) * cos(radians(pitch));
	direction.y = sin(radians(pitch));
	direction.z = sin(radians(yaw)) * cos(radians(pitch));
	cameraFront = normalize(direction);
#pragma endregion

#pragma region Light
	glUseProgram(lightID);
	glBindVertexArray(lightVAO);

	if (glfwGetKey(window, GLFW_KEY_UP) == GLFW_PRESS)
		lightPos += cameraSpeed * cameraFront;
	if (glfwGetKey(window, GLFW_KEY_DOWN) == GLFW_PRESS)
		lightPos -= cameraSpeed * cameraFront;
	if (glfwGetKey(window, GLFW_KEY_LEFT) == GLFW_PRESS)
		lightPos -= normalize(cross(cameraFront, cameraUp)) * cameraSpeed;
	if (glfwGetKey(window, GLFW_KEY_RIGHT) == GLFW_PRESS)
		lightPos += normalize(cross(cameraFront, cameraUp)) * cameraSpeed;
	if (glfwGetKey(window, GLFW_KEY_TAB) == GLFW_PRESS)
		lightPos = vec3(0.f);

	mat4 light_model = mat4(1.0f);
	light_model = translate(light_model, lightPos);
	light_model = scale(light_model, vec3(0.2f));
	mat4 light_view = mat4(1.0f);
	light_view = lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
	mat4 light_projection = mat4(1.0f);
	light_projection = perspective(radians(fov), 800.0f / 600.0f, 0.1f, 100.0f);

	int light_modelLoc = glGetUniformLocation(lightID, "model");
	glUniformMatrix4fv(light_modelLoc, 1, GL_FALSE, value_ptr(light_model));
	int light_viewLoc = glGetUniformLocation(lightID, "view");
	glUniformMatrix4fv(light_viewLoc, 1, GL_FALSE, value_ptr(light_view));
	int light_projLoc = glGetUniformLocation(lightID, "projection");
	glUniformMatrix4fv(light_projLoc, 1, GL_FALSE, value_ptr(light_projection));

	//glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);
#pragma endregion

#pragma region Program
	glUseProgram(programID);
	glBindVertexArray(cubeVAO);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture2);
	glActiveTexture(GL_TEXTURE1);
	glBindTexture(GL_TEXTURE_2D, texture3);

	//Camera position
	int camLoc = glGetUniformLocation(programID, "viewPos");
	glUniform3f(camLoc, cameraPos.x, cameraPos.y, cameraPos.z);
	//Material component
	int mat_amb = glGetUniformLocation(programID, "material.ambient");
	glUniform3f(mat_amb, 1.0f, 0.5f, 0.31f);
	int mat_diff = glGetUniformLocation(programID, "material.diffuse");
	glUniform1i(mat_diff, 0);
	int mat_spec = glGetUniformLocation(programID, "material.specular");
	glUniform1i(mat_spec, 1);
	int mat_shin = glGetUniformLocation(programID, "material.shininess");
	glUniform1f(mat_shin, 32.0f);
	//Light component
	int light_pos = glGetUniformLocation(programID, "light.lightPosition");
	glUniform3f(light_pos, lightPos.x, lightPos.y, lightPos.z);
	int cam_pos = glGetUniformLocation(programID, "light.camPosition");
	glUniform3f(cam_pos, cameraPos.x, cameraPos.y, cameraPos.z);
	int light_dir = glGetUniformLocation(programID, "light.direction");
	glUniform3f(light_dir, cameraFront.x, cameraFront.y, cameraFront.z);
	int light_icut = glGetUniformLocation(programID, "light.innerCutOff");
	glUniform1f(light_icut, cos(glm::radians(12.5f)));
	int light_ocut = glGetUniformLocation(programID, "light.outerCutOff");
	glUniform1f(light_ocut, cos(glm::radians(17.5f)));
	int light_amb = glGetUniformLocation(programID, "light.ambient");
	glUniform3f(light_amb, 0.5f, 0.5f, 0.5f);
	int light_diff = glGetUniformLocation(programID, "light.diffuse");
	glUniform3f(light_diff, 1.0f, 1.0f, 1.0f);
	int light_spec = glGetUniformLocation(programID, "light.specular");
	glUniform3f(light_spec, 1.0f, 1.0f, 1.0f);
	int light_const = glGetUniformLocation(programID, "light.constant");
	glUniform1f(light_const, 1.0f);
	int light_lin = glGetUniformLocation(programID, "light.linear");
	glUniform1f(light_lin, 0.09f);
	int light_quad = glGetUniformLocation(programID, "light.quadratic");
	glUniform1f(light_quad, 0.032f);

#pragma region Cube
	/*float _rotation = 50.0f;
	vec3 pos(0.0f, 0.0f, 0.0f);
	mat4 model = mat4(1.0f);
	model = translate(model, pos);
	//model = rotate(model, timeValue * radians(_rotation), vec3(0.0f, 1.0f, 0.0f));
	const float radius = 10.0f;
	mat4 view = mat4(1.0f);
	view = lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
	mat4 projection = mat4(1.0f);
	projection = perspective(radians(fov), 800.0f / 600.0f, 0.1f, 100.0f);

	int vertexColorLocation = glGetUniformLocation(programID, "new_color");
	//glUniform4f(vertexColorLocation, r * 0.2f, g * 0.2f, b * 0.2f, 1.0f);
	int vertexTextureCoor = glGetUniformLocation(programID, "coor");
	//glUniform2f(vertexTextureCoor, r, g);
	int modelLoc = glGetUniformLocation(programID, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, value_ptr(model));
	int viewLoc = glGetUniformLocation(programID, "view");
	glUniformMatrix4fv(viewLoc, 1, GL_FALSE, value_ptr(view));
	int projLoc = glGetUniformLocation(programID, "projection");
	glUniformMatrix4fv(projLoc, 1, GL_FALSE, value_ptr(projection));

	glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);*/
#pragma endregion

#pragma region MultiCube
	vec3 cubePositions[] = {
	vec3(0.0f,  -2.0f,  0.0f),
	vec3(1.5f,  -1.0f, 0.0f),
	vec3(2.5f, 0.5f, 0.0f),
	vec3(2.0f, 2.0f, 0.0f),
	vec3(-2.5f, 0.5f, 0.0f),
	vec3(-1.5f,  -1.0f, 0.0f),
	vec3(0.0f, 1.0f, 0.0f),
	vec3(-2.0f, 2.0f, 0.0f),
	};

	// boucle coeur
	for (unsigned int i = 0; i < 8; i++)
	{
		float _rotation = 50.0f;
		//if (i % 2 == 0)
		//{
		//	glActiveTexture(GL_TEXTURE0);
		//	glBindTexture(GL_TEXTURE_2D, texture1);
		//}
		//else
		//{
		//	_rotation = -_rotation;
		//	glActiveTexture(GL_TEXTURE0);
		//	glBindTexture(GL_TEXTURE_2D, texture2);
		//}

		vec3 pos = cubePositions[i];
		mat4 model = mat4(1.0f);
		model = translate(model, pos);
		model = scale(model, vec3(1.0f));
		model = rotate(model, timeValue * radians(_rotation), vec3(0.0f, 1.0f, 0.0f));
		const float radius = 10.0f;
		mat4 view = mat4(1.0f);
		view = lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
		mat4 projection = mat4(1.0f);
		projection = perspective(radians(fov), 800.0f / 600.0f, 0.1f, 100.0f);

		int vertexColorLocation = glGetUniformLocation(programID, "new_color");
		//glUniform4f(vertexColorLocation, r * 0.2f, g * 0.2f, b * 0.2f, 1.0f);
		int vertexTextureCoor = glGetUniformLocation(programID, "coor");
		//glUniform2f(vertexTextureCoor, r, g);
		int modelLoc = glGetUniformLocation(programID, "model");
		glUniformMatrix4fv(modelLoc, 1, GL_FALSE, value_ptr(model));
		int viewLoc = glGetUniformLocation(programID, "view");
		glUniformMatrix4fv(viewLoc, 1, GL_FALSE, value_ptr(view));
		int projLoc = glGetUniformLocation(programID, "projection");
		glUniformMatrix4fv(projLoc, 1, GL_FALSE, value_ptr(projection));

		// Point light
		//vec3 direction = cubePositions[i] - lightPos;
		//int light_pos = glGetUniformLocation(programID, "light.direction");
		//glUniform3f(light_pos, direction.x, direction.y, direction.z);

		glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);
	}
#pragma endregion  

#pragma endregion 

	glfwSwapBuffers(window);
	glfwPollEvents();
}

void EngineWindow::mouse_callback(double xpos, double ypos)
{
	EngineWindow* _engine = reinterpret_cast<EngineWindow*>(glfwGetWindowUserPointer(window));
	if (_engine->firstMouse)
	{
		_engine->lastX = xpos;
		_engine->lastY = ypos;
		_engine->firstMouse = false;
	}

	float xoffset = xpos - _engine->lastX;
	float yoffset = _engine->lastY - ypos;
	_engine->lastX = xpos;
	_engine->lastY = ypos;

	float sensitivity = 0.1f;
	xoffset *= sensitivity;
	yoffset *= sensitivity;

	_engine->yaw = _engine->yaw + xoffset > 360 ? -360 + xoffset : _engine->yaw + xoffset < -360 ? 360 + xoffset : _engine->yaw += xoffset;
	_engine->pitch = _engine->pitch + yoffset > 90 ? -90 + yoffset : _engine->pitch + yoffset < -90 ? 90 + yoffset : _engine->pitch += yoffset;
}

void EngineWindow::scroll_callback(double xoffset, double yoffset)
{
	EngineWindow* _engine = reinterpret_cast<EngineWindow*>(glfwGetWindowUserPointer(window));
	_engine->fov -= (float)yoffset * 2;
	if (_engine->fov < 20.0f)
		_engine->fov = 20.0f;
	if (_engine->fov > 120.0f)
		_engine->fov = 120.0f;
}

void EngineWindow::Stop() const
{
	StopWindow();
}

void EngineWindow::StopWindow() const
{
	glDeleteBuffers(1, &VBO);
	glDeleteBuffers(1, &EBO);
	glDeleteVertexArrays(1, &cubeVAO);
	glDeleteVertexArrays(1, &lightVAO);
	glDeleteProgram(programID);
	glDeleteProgram(lightID);

	// Close OpenGL window and terminate GLFW
	glfwTerminate();
}
