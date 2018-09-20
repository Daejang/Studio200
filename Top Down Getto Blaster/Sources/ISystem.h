#pragma once

class ISystem
{
public:

  virtual void Start()  = 0;
  virtual void Update(float dt) = 0;
  virtual void End()    = 0;
};