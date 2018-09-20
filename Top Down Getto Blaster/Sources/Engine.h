#pragma once

#include "ISystem.h"
#include <vector>

class Engine : public ISystem
{
public:

  /*static Engine* instance()
  {
    if (!_instance)
      _instance = new Engine;
    return _instance;
  }*/

  void Start() override;
  void Update(float dt) override;
  void End() override;

  void Add(ISystem &system);
  void ClearSystems();

private:
  static Engine *_instance;
  std::vector<ISystem*> Systems;
  
};