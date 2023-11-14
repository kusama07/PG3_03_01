#include "InputManager.h"
#include "Novice.h" 

InputManager* InputManager::GetInstance()
{
    static InputManager instance;
    return &instance;
}

void InputManager::Update()
{
    memcpy(preKeys, keys, 256);
    Novice::GetHitKeyStateAll(keys);
}

bool InputManager::GetKeys(BYTE keyNumber)
{
	if (keys[keyNumber] != 0)
	{
		return true;
	}
	return false;
}

bool InputManager::GetPreKeys(BYTE keyNumber)
{
	if (preKeys[keyNumber] == 0 && keys[keyNumber] != 0)
	{
		return true;
	}
	return false;
}

InputManager::InputManager()
{
}

InputManager::~InputManager()
{
}