#include "TitleScene.h"

void TitleScene::Init() {

}
void TitleScene::Update(char* preKeys, char* keys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = STAGE;
	}
}
void TitleScene::Draw() {
	Novice::ScreenPrintf(10, 50, "Scene = TitleScene     Press SpaceKey");
}