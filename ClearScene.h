#pragma once
#include "IScene.h"

class ClearScene : public IScene {
public:
	void Init()override;
	void Update(char* preKeys, char* keys)override;
	void Draw()override;
};