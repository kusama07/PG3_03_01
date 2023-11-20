#pragma once
enum SCENE { TITLE, STAGE, CLEAR };

class IScene
{
protected:
	// シーン番号を管理する変数
	static int sceneNo;

public:
	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	// 仮想デストラクタを用意しないと警告される
	virtual ~IScene();

	// シーン番号ゲッター
	int GetSceneNo();

};