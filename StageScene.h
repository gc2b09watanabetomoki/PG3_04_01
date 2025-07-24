#pragma once
#include "IScene.h"



class StageScene : public IScene {
private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* icommand_ = nullptr;
	Player* player_;

public:
	StageScene();
	//~StageScene();
	void Init()override;
	void Update(char* preKeys, char* keys)override;
	void Draw()override;
};