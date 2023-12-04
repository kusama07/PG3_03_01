#include<Novice.h>
#include "Vector2.h"

class Player {
public:
	Player();

	void Init();
	void Update();
	void Draw();

	// キーごとにコマンドを作る
	void MoveRight();
	void MoveLeft();

private:
	Vector2 pos_;
	float speed_;

};