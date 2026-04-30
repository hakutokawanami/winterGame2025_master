#pragma once
#include"Geometry.h"
class Player;
class PlayerHPUI
{
	public:
	PlayerHPUI(int GraphHandle ,int textHandle);
	~PlayerHPUI();
	void Init();
	void Update();
	void Draw(Player& player);
private:
	Vector2 position_;
	int hpGraphHandle_;
	int textGraphHandle_;
};

