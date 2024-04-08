//#include "Shader.h"
//#include <fstream>
//#include <sstream>
//#include <iostream>
//#include <glad/glad.h>
//
//Shader::Shader(const char* vertexPath, const char* fragmentPath)
//{
//
//#pragma region Get source code from filepath
//	string vertexCode;
//	string fragmentCode;
//	ifstream vShaderFile;
//	ifstream fShaderFile;
//	// ensure ifstream objects can throw exceptions:
//	vShaderFile.exceptions(ifstream::failbit | ifstream::badbit);
//	fShaderFile.exceptions(ifstream::failbit | ifstream::badbit);
//	try
//	{
//		// open files
//		vShaderFile.open(vertexPath);
//		fShaderFile.open(fragmentPath);
//		stringstream vShaderStream, fShaderStream;
//		// read file's buffer contents into streams
//		vShaderStream << vShaderFile.rdbuf();
//		fShaderStream << fShaderFile.rdbuf();
//		// close file handlers
//		vShaderFile.close();
//		fShaderFile.close();
//		// convert stream into string
//		vertexCode = vShaderStream.str();
//		fragmentCode = fShaderStream.str();
//	}
//	catch (ifstream::failure e)
//	{
//		cout << "ERROR::SHADER::FILE_NOT_SUCCESFULLY_READ (SKILL_ISSUS)" << endl;
//	}
//	const char* vShaderCode = vertexCode.c_str();
//	const char* fShaderCode = fragmentCode.c_str();
//#pragma endregion
//
//#pragma region Compile shaders
//	unsigned int vertex, fragment;
//	int success;
//	char infoLog[512];
//
//	// vertex Shader
//	vertex = glCreateShader(GL_VERTEX_SHADER);
//	glShaderSource(vertex, 1, &vShaderCode, NULL);
//	glCompileShader(vertex);
//	// print compile errors if any
//	glGetShaderiv(vertex, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(vertex, 512, NULL, infoLog);
//		std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
//	};
//
//	// fragment Shader
//	fragment = glCreateShader(GL_VERTEX_SHADER);
//	glShaderSource(fragment, 1, &fShaderCode, NULL);
//	glCompileShader(fragment);
//	// print compile errors if any
//	glGetShaderiv(fragment, GL_COMPILE_STATUS, &success);
//	if (!success)
//	{
//		glGetShaderInfoLog(vertex, 512, NULL, infoLog);
//		std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
//	};
//
//	// shader Program
//	ID = glCreateProgram();
//	glAttachShader(ID, vertex);
//	glAttachShader(ID, fragment);
//	glLinkProgram(ID);
//	// print linking errors if any
//	glGetProgramiv(ID, GL_LINK_STATUS, &success);
//	if (!success)
//	{
//		glGetProgramInfoLog(ID, 512, NULL, infoLog);
//		std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
//	}
//
//	// delete the shaders as they're linked into our program now and no longer necessary
//	glDeleteShader(vertex);
//	glDeleteShader(fragment);
//#pragma endregion
//}
//
//void Shader::Use()
//{
//	glUseProgram(ID);
//}
//
//void Shader::SetBool(const string& name, bool value) const
//{
//	glUniform1i(glGetUniformLocation(ID, name.c_str()), (int)value);
//}
//
//void Shader::SetInt(const string& name, int value) const
//{
//	glUniform1i(glGetUniformLocation(ID, name.c_str()), value);
//}
//
//void Shader::SetFloat(const string& name, float value) const
//{
//	glUniform1f(glGetUniformLocation(ID, name.c_str()), value);
//}