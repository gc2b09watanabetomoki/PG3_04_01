#include <Novice.h>
#include "player.h"
#include "command.h"
#include "InputHandler.h"
#include "StageScene.h"
#include "IScene.h"
#include "GameManager.h"

const char kWindowTitle[] = "GC2B_09_ワタナベ_トモキ_タイトル";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };


	GameManager gameManager;
	gameManager.Run(preKeys, keys);

	

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
