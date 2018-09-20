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
  printf("Begin Update...\n");


	for each (ISystem* system in Systems)
	{
		system->Update(dt);
	}

  printf("End Update\n");
}

void Engine::End()
{
	for each (ISystem* system in Systems)
	{
		system->End();
	}

	Systems.clear();
}

void Engine::Add(ISystem &system)
{
  Systems.push_back(&system);
}

void Engine::ClearSystems()
{
	Systems.clear();
}