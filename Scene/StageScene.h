#include "IScene.h"
#include "Input/InputHandle.h"
#include "Command/Command.h"
#include "ImGuiManager.h"

class StageScene : public IScene {
public:
	StageScene();
	//~StageScene() override;
	void Init() override;
	void Update() override;
	void Draw() override;

private:
	InputHandler* inputHandler_ = nullptr;
	ICommand* command_ = nullptr;

	Player* player_;
};