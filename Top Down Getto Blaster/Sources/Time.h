#pragma once

#include "ISystem.h"
#include <Windows.h>

class Time : public ISystem
{
public:

  // Singleton Call
  static Time* GetInstance()
  {
    static Time _instance;
    return &_instance;
  }

  // ISystem
  void Start() override;
  void Update(float dt = 0) override;
  void End() override;

  // Getters
  float DeltaTime();
  bool  IsNextFrameReady();
  
  // Setters
  void SetFrameRate(float rate);


private:
  

  float oldTime;
  float newTime;

  float deltaTime;

  float framerate = 60.0;
  float frameTime = 1 / framerate;

  float deltaSum = 0.0;


};
