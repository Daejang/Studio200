// Add Header

#pragma once


class GameStateManager
{
public:
	static GameStateManager *instance()
	{
		if (!_instance)
			_instance = new GameStateManager;
		return _instance;
	}

	bool IsRunning();

private:
	static GameStateManager *_instance;
	bool   gameIsRunning = true;

};

