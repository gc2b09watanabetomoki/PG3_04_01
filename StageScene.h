#pragma once
#include "IScene.h"

class StageScene : public IScene {
public:
	void Init()override;
	void Update(char* preKeys, char* keys)override;
	void Draw()override;
};
