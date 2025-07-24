#pragma once


class Player {
private:

	struct Vector2 {
		int x;
		int y;
	};

	Vector2 pos_ = {360,360};
	int speed_ = 10;
public:
	Player();

	void Init();
	void Update();
	void Draw();

	// メンバ関数
	void MoveRight();
	void MoveLeft();
};