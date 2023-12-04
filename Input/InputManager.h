#pragma once

#include "Input.h"
#include "Novice.h"

class InputManager {
public:
    // シングルトンの取得
    static InputManager* GetInstance();

    // 初期化

    void Update();

    bool IsKeyPressed(BYTE keyNumber) const;

    bool IsKeyTriggered(BYTE keyNumber) const;

private:
    InputManager() = default;
    ~InputManager();
    InputManager(const InputManager&) = delete;
    const InputManager& operator=(const InputManager&) = delete;


private:

    char keys[256] = { 0 };

    char preKeys[256] = { 0 };

};