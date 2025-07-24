#include "player.h"
#include "Novice.h"

Player::Player() {

}

void Player::MoveRight() {
	this->pos_.x += this->speed_;
}
void Player::MoveLeft() {
	this->pos_.x -= this->speed_;
}

void Player::Init() {

}
void Player::Update() {
	Player::MoveLeft();
	Player::MoveRight();
	Player::Draw();
}

void Player::Draw() {
	Novice::DrawBox(pos_.x, pos_.y, 30, 30, 0.0f, WHITE, kFillModeSolid);
	//Novice::ScreenPrintf(30, 30, "pos.x = %d", pos_.x);
}