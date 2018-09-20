#include "Time.h"

//#include <stdio.h>

void Time::Start()
{
  oldTime = timeGetTime();
}

void Time::Update(float dt)
{
  _CRT_UNUSED(dt);

  newTime = timeGetTime();
  deltaTime = (newTime - oldTime) / 1000.0;
  oldTime = newTime;

  deltaSum += deltaTime;
}

void Time::End()
{
}

float Time::DeltaTime()
{
  return deltaTime;
}

bool Time::IsNextFrameReady()
{
  if (deltaSum >= frameTime)
  {
    deltaTime = deltaSum;
    deltaSum  = 0;
    return true;
  }

  return false;
}

void Time::SetFrameRate(float rate)
{
  framerate = rate;
}

