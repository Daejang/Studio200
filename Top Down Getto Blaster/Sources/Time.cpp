#include "Time.h"

//#include <stdio.h>

void Time::Start()
{
  oldTime = steady_clock::now();

  framerate = 60;
  frameTime = 1 / framerate;
}

void Time::Update(float dt)
{
  _CRT_UNUSED(dt);

  newTime   = steady_clock::now();
  deltaTime = newTime - oldTime;
  oldTime   = newTime;

  deltaSum += deltaTime;
}

void Time::End()
{
}

float Time::DeltaTime()
{
  return deltaTime.count() / 1000;
}

bool Time::IsNextFrameReady()
{
  if (deltaSum.count() >= frameTime)
  {
    
    return true;
  }

  return false;
}

void Time::SetFrameRate(float rate)
{
  framerate = rate;
}
