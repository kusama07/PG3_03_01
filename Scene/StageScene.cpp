#include "StageScene.h"

StageScene::StageScene()
{
}

void StageScene::Init()
{
	inputHandler_ = new InputHandler();

	//Assigh command
	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	//New Player
	player_ = new Player();
	player_->Init();
}

void StageScene::Update()
{
	// get Input
	command_ = inputHandler_->HandleInput();

	// set command
	if (this->command_) {
		command_->Exec(*player_);
	}

	player_->Update();

	ImGui::Begin("Stage");
	ImGui::End();
}

void StageScene::Draw()
{
	player_->Draw();
}
