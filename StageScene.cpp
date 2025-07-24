#include "StageScene.h"

StageScene::StageScene() {

}

// 初期化処理
void StageScene::Init() {
	inputHandler_ = new InputHandler();

	// Assign command
	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	// New Player
	player_ = new Player();

}

// 更新処理
void StageScene::Update(char* preKeys, char* keys) {
	// get Input
	icommand_ = inputHandler_->HandleInput();

	// setcommand
	if (this->icommand_) {
		icommand_->Exec(*player_);
	}

	player_->Update();

	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNo = CLEAR;
	}
}

void StageScene::Draw() {
	Novice::ScreenPrintf(10, 10, "StageScene");
}