#include "TitleScene.h"

TitleScene::TitleScene()
{
}

TitleScene::~TitleScene()
{
}

void TitleScene::Init()
{
	inputManager_ = InputManager::GetInstance();

}

void TitleScene::Update()
{
	if (inputManager_->IsKeyPressed(DIK_RETURN))
	{
		sceneNo = STAGE;
	}

	ImGui::Begin("Title");
	ImGui::End();
}

void TitleScene::Draw()
{
}
