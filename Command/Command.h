#pragma once
#include "GameSceneClass/Player.h"
class Player;

class ICommand
{
public:
	virtual ~ICommand();
	virtual void Exec(Player& plaer) = 0;
};

class MoveRightCommand : public ICommand {
public:
	void Exec(Player& player)override;

};
class MoveLeftCommand : public ICommand {
public:
	void Exec(Player& player)override;

};


