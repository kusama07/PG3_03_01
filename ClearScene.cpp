#include "ClearScene.h" 

ClearScene::ClearScene()
{
}

void ClearScene::Init()
{
	inputManager_ = inputManager_->GetInstance();

}

void ClearScene::Update()
{
	if (inputManager_->IsKeyPressed(DIK_RETURN))
	{
		sceneNo = TITLE;
	}
	ImGui::Begin("Clear");
	ImGui::End();
}

void ClearScene::Draw()
{
}


ClearScene::~ClearScene()
{
}
