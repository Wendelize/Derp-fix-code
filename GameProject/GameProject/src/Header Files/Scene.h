#pragma once
#include "Include.h"

class Scene
{
private:
	Window m_window;
	Shader m_shader;
	Camera m_camera;

public:
	Scene();
	~Scene();

	void Init();
	void UseShader(Shader shader);
	void Render(vector<Object*> objects);
};
