#pragma once
#include "Novice.h"

class InputManager
{
public:

	static InputManager* GetInstance();

	void Update();

	bool GetKeys(BYTE keyNumber);

	bool GetPreKeys(BYTE keyNumber);

	InputManager();

	~InputManager();

	InputManager(const InputManager&) = delete;

	InputManager& operator=(const InputManager&) = delete;

private:

	char keys[256] = { 0 };
	char preKeys[256] = { 0 };


};