#include "IScene.h"
#include "Input/InputManager.h"
#include "ImGuiManager.h"

class ClearScene : public IScene{
public:
	ClearScene();
	~ClearScene()override;
	void Init() override;
	void Update() override;
	void Draw() override;

private:
	InputManager* inputManager_ = nullptr;
};