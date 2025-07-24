#include "ClearScene.h"

void ClearScene::Init() {

}
void ClearScene::Update(char* preKeys, char* keys) {
	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNo = TITLE;
	}
}
void ClearScene::Draw() {
	Novice::ScreenPrintf(10, 50, "Scene = ClearScene     Press SpaceKey");
}