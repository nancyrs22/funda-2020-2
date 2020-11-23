#pragma once
#include <GL/glew.h>
#include <string>

using namespace std;

class GLProgram
{
private:
	GLuint _programID;
	GLuint _fragmentShaderID;
	GLuint _vertexShaderID;

	void compileShader(const string& shaderPath, GLuint id);

public:
	GLProgram();
	~GLProgram();
	int _numAtribute;
	void addAtribute(const string atributeName);
	void use();
	void unuse();
	void compileShaders(const string& vertexShaderFilePath,
		const string& fragmentShaderFilePath);

	void linkShader();

	GLuint getUniformLocation(const string& name);
};