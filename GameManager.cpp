#include "GameManager.h"

GameManager::GameManager()
{
	// 各シーンの配列
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();

	//　初期シーンの設定
	int sceneNo = IScene_->GetSceneNo();
	sceneArr_[sceneNo] = std::make_unique<TitleScene>();

	// inputManager_ の初期化
	inputManager_ = std::make_unique<InputManager>();

}

GameManager::~GameManager()
{

}

int GameManager::Run()
{
	while (Novice::ProcessMessage() == 0) {
		Novice::BeginFrame();// フレームの開始

		inputManager_->Update();

		//　シーンチェック
		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		//　シーン変更チェック
		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Init();
		}

		////　更新処理
		sceneArr_[currentSceneNo_]->Update(); // シーンとの変更処理a

		//// 描画が処理
		sceneArr_[currentSceneNo_]->Draw();

		Novice::EndFrame(); // フレームの終了
		
		// ESCキーが押されたらループを抜ける
		if (inputManager_->GetPreKeys(DIK_ESCAPE) == 0 &&
			inputManager_->GetKeys(DIK_ESCAPE) != 0) {
			break;
		}
	}
	return 0;
}
