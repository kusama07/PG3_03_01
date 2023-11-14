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

};