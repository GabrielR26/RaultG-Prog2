#pragma once 
using namespace std;

#ifndef SHADER_H
#define SHADER_H

#include <string>

class Shader
{
public:
    // the program ID
    unsigned int ID;

    // constructor reads and builds the shader
    Shader() = default;
    Shader(const char* vertexPath, const char* fragmentPath);

    // use/activate the shader
    void Use();

    // utility uniform functions
    void SetBool(const string& name, bool value) const;
    void SetInt(const string& name, int value) const;
    void SetFloat(const string& name, float value) const;
};
#endif