#pragma once

#include "ISystem.h"
#include <chrono>

using namespace std::chrono;

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
  bool IsNextFrameReady();

  // Setters
  void SetFrameRate(float rate);


private:

  time_point<steady_clock> oldTime, newTime;

  duration<float, std::milli> deltaTime;

  float framerate;
  float frameTime;

  duration<float, std::milli> deltaSum;
};
