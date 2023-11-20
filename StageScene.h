#include "IScene.h"
#include "InputManager.h"
#include "ImGuiManager.h"

class StageScene : public IScene {
public:
	StageScene();
	~StageScene() override;
	void Init() override;
	void Update() override;
	void Draw() override;

private:
	InputManager* inputManager_ = nullptr;

	Vector2 playerPos_;
	Vector2 bulletPos_;
	Vector2 enemyPos_;

	int Speed = 10;

	const int Radius_ = 30;

	int isBulletShot_ = false;

	Vector2 e2b_;
	float distance;
};