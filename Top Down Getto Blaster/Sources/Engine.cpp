// Add header

#include "Engine.h"
#include <stdio.h>

void Engine::Start()
{
	for each (ISystem* system in Systems)
	{
		system->Start();
	}
}

void Engine::Update(float dt)
{
	for each (ISystem* system in Systems)
	{
		system->Update(dt);
	}
}

void Engine::End()
{
	for each (ISystem* system in Systems)
	{
		system->End();
	}

	Systems.clear();
}

/* Adds all systems before starting the gameloop */

void Engine::Prepare()
{
  Add(*new Input);




}

void Engine::Add(ISystem &system)
{
  Systems.push_back(&system);
}

void Engine::ClearSystems()
{
	Systems.clear();
}