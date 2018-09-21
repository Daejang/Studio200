#pragma once

#include "ISystem.h"
#include <Windows.h>

class Input : public ISystem
{
public:

  // Constructors/Destructors
  Input();

  // ISystem Functions
  void Start() override;
  void Update(float dt) override;
  void End() override;

  // Class methods
  bool IsKeyPressed(char key);
  bool IsKeyReleased(char key);
  bool IsKeyHeld(char key);


private:
  unsigned char currState[256];
  unsigned char prevState[256];

};
