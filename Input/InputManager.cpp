#include "InputManager.h"

InputManager* InputManager::GetInstance() {
    static InputManager instance;
    return &instance;
}

void InputManager::Update() {
    memcpy(preKeys, keys, 256);
    Novice::GetHitKeyStateAll(keys);

}

bool InputManager::IsKeyPressed(BYTE keyNumber) const {
    if (preKeys[keyNumber] == 0 && keys[keyNumber] != 0)
    {
        return true;
    }
    return false;
}

bool InputManager::IsKeyTriggered(BYTE keyNumber) const {
    if (keys[keyNumber] != 0)
    {
        return true;
    }
    return false;

}

InputManager::~InputManager() {
}