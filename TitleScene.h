#pragma once
#include "IScene.h"
#include "InputManager.h"
#include "ImGuiManager.h"

class TitleScene : public IScene
{
public:
	TitleScene();
	~TitleScene() override;
	void Init() override;
	void Update() override;
	void Draw() override;

private:
	InputManager* inputManager_ = nullptr;

};

