#include "StageScene.h"

void StageScene::Init() {

}
void StageScene::Update(char* preKeys, char* keys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = CLEAR;
	}
}
void StageScene::Draw() {
	Novice::ScreenPrintf(10, 50, "Scene = StageScene     Press SpaceKey");
}