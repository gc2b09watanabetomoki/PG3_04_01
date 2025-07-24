#pragma once
#include <memory>
#include "IScene.h"
#include "StageScene.h"
#include "TitleScene.h"
#include "ClearScene.h"

class GameManager {
private:
	// シーンを保持するメンバ変数
	std::unique_ptr<IScene> sceneArr_[3];

	// どのステージを呼び出すかを管理する変数
	int currentSceneNo_ = STAGE; // 現在のシーン
	int prevSceneNo_ = TITLE; // 前のシーン


public:
	GameManager();
	~GameManager();

	int Run(char* preKeys, char* keys); // この関数でゲームループを呼び出す
};
