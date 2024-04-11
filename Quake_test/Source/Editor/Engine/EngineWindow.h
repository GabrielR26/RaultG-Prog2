#pragma once
#include "../../CoreMinimal.h"
#include "Shader.h"

#define genericCallback(functionName)\
        [](GLFWwindow* window, auto ... arg) {\
            EngineWindow* pointer = static_cast<EngineWindow*>(glfwGetWindowUserPointer(window));\
            if(pointer) pointer->functionName(pointer, arg...);\
        }

class EngineWindow
{
	string title;
	vec2 size;
	vec4 bgColor;
	GLFWwindow* window;

	GLuint cubeVAO;
	GLuint lightVAO;
	GLuint VBO;
	GLuint l_VBO;
	GLuint EBO;
	GLuint l_EBO;

	unsigned int programID;
	unsigned int lightID;
	GLuint texture1;
	GLuint texture2;
	GLuint texture3;

	glm::vec3 cameraPos;
	glm::vec3 cameraFront;
	glm::vec3 cameraUp;
	glm::vec3 lightPos;

	function<void(EngineWindow*, double, double)> onWindowMouseCallback = [](auto self, double _a, double _b) { self->mouse_callback(_a, _b); };
	function<void(EngineWindow*, double, double)> onWindowScrollCallback = [](auto self, double _a, double _b) { self->scroll_callback(_a, _b); };

public:
	float lastX, lastY, fov;
	float pitch, yaw;
	bool firstMouse;

public:
	FORCEINLINE string GetTitle() const
	{
		return title;
	}
	FORCEINLINE vec2 GetSize() const
	{
		return size;
	}
	FORCEINLINE GLFWwindow* GetWindow() const
	{
		return window;
	}

public:
	EngineWindow();
	~EngineWindow();

public:
#pragma region Start
	void Start();
	void InitGLFW();
	void Program(); 
	void Light();
	void Texture();
#pragma endregion
#pragma region Update
	void Update();
	void UpdateWindow();
	void mouse_callback(double xpos, double ypos);
	void scroll_callback(double xoffset, double yoffset);
#pragma endregion
#pragma region Stop
	void Stop() const;
	void StopWindow() const;
#pragma endregion
};
