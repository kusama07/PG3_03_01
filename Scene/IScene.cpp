#include "IScene.h"

//タイトルシーンで初期化
int IScene::sceneNo = TITLE;

//　仮想デストラクタの定義
// 純粋仮想関数化していないので、ここで定義する
IScene::~IScene(){}

//　シーン番号ゲッター
int IScene::GetSceneNo() { return sceneNo; };