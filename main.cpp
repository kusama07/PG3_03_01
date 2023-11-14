#include <Novice.h>
#include "GameManager.h"

const char kWindowTitle[] = "LE2B_10_kusama";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	GameManager* sceneManager = new GameManager();
	sceneManager->Run();

	delete sceneManager;

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
