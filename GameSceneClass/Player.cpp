#include "Player.h"

Player::Player()
{
}

void Player::Init()
{
	pos_ = { 640.0f,360.0f };
	speed_ = 10.0f;
}

void Player::Update()
{
	MoveRight();
	MoveLeft();
}

void Player::Draw()
{
	Novice::DrawBox(int(pos_.x), int(pos_.y), 100, 100, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight()
{
	this->pos_.x += this->speed_;
}

void Player::MoveLeft()
{
	this->pos_.x -= this->speed_;
}
