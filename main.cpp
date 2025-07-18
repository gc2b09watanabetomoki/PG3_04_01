#include <Novice.h>
#include "GameManager.h"
const char kWindowTitle[] = "GC2B_09_ワタナベ_トモキ_タイトル";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
	
	GameManager gameManager;
	gameManager.Run(preKeys,keys);
	
	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
