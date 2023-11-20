#include "StageScene.h"

StageScene::StageScene()
{
}

StageScene::~StageScene()
{
}

void StageScene::Init()
{
	inputManager_ = inputManager_->GetInstance();

	playerPos_ = { 640,360 };

	enemyPos_ = { 10,60 };

	bulletPos_ = { 10,10 };

}

void StageScene::Update()
{
	if (inputManager_->IsKeyTriggered(DIK_W)) {
		playerPos_.y = playerPos_.y - Speed;
	}

	if (inputManager_->IsKeyTriggered(DIK_A)) {
		playerPos_.x = playerPos_.x - Speed;
	}

	if (inputManager_->IsKeyTriggered(DIK_S)) {
		playerPos_.y = playerPos_.y + Speed;
	}

	if (inputManager_->IsKeyTriggered(DIK_D)) {
		playerPos_.x = playerPos_.x + Speed;
	}

	if (inputManager_->IsKeyPressed(DIK_RETURN))
	{
		sceneNo = CLEAR;
	}

	if (inputManager_->IsKeyTriggered(DIK_SPACE) && inputManager_->IsKeyPressed(DIK_SPACE) == 0) {
		if (!isBulletShot_) {
			isBulletShot_ = true;
			bulletPos_.x = playerPos_.x;
			bulletPos_.y = playerPos_.y;
		}
	}

	if (isBulletShot_) {
		bulletPos_.y -= Speed * 2;
		//弾が上に行ったとき
		if (bulletPos_.y <= 0) {
			isBulletShot_ = false;
		}
	}

	e2b_.x = bulletPos_.x - enemyPos_.x;
	e2b_.y = bulletPos_.y - enemyPos_.y;

	distance = (e2b_.x * e2b_.x) + (e2b_.y * e2b_.y);

	if (distance < (Radius_ + Radius_) * (Radius_ + Radius_)) {
		sceneNo = CLEAR;
	}

	ImGui::Begin("Stage");
	ImGui::End();
}

void StageScene::Draw()
{
	Novice::DrawBox(int(playerPos_.x), int(playerPos_.y), Radius_, Radius_, 0.0f, WHITE, kFillModeSolid);

	//弾
	if (isBulletShot_) {
		Novice::DrawTriangle(int(bulletPos_.x), int(bulletPos_.y), int(bulletPos_.x) - 10, int(bulletPos_.y) + 10, int(bulletPos_.x) + 10, int(bulletPos_.y) + 10, WHITE, kFillModeSolid);
	}

	Novice::DrawEllipse(int(enemyPos_.x), int(enemyPos_.y), 30, 30, 0.0f, WHITE, kFillModeSolid);
}
