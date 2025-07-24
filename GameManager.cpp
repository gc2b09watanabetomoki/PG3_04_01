#include "GameManager.h"
#include <Novice.h>

// コンストラクタ
GameManager::GameManager() {
	// 各シーンの配列
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();

	// 初期シーンの設定
	//int sceneNo_ = TITLE;
}

// デストラクタ
GameManager::~GameManager() {}

int GameManager::Run(char* preKeys, char* keys) {
	while (Novice::ProcessMessage() == 0) {
		Novice::BeginFrame(); // フレームの開始

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		// シーンのチェック
		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		// シーン変更チェック
		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Init();
		}

		//// 更新処理
		sceneArr_[currentSceneNo_]->Update(preKeys, keys); // シーンごとの更新処理

		//描画処理
		sceneArr_[currentSceneNo_]->Draw();

		Novice::EndFrame(); // フレームの終了
	}
	return 0;
}