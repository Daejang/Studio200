#include "Input.h"
#include <stdio.h>

Input::Input() {}

void Input::Start()
{
  GetKeyboardState(currState);
  GetKeyboardState(prevState);
}

void Input::Update(float dt)
{
  memcpy(prevState, currState, 256);
  GetKeyboardState(currState);


  if(IsKeyHeld('w'))
    printf("W is pressed\n");

  if (IsKeyHeld('a'))
    printf("A is pressed\n");

  if (IsKeyHeld('s'))
    printf("S is pressed\n");

  if (IsKeyHeld('d'))
    printf("D is pressed\n");


}

void Input::End() {}

bool Input::IsKeyPressed(char key)
{
  return (currState[key] && !prevState[key]);
}

bool Input::IsKeyReleased(char key)
{
  return (prevState[key] && !currState[key]);
}

bool Input::IsKeyHeld(char key)
{
  return (currState[key] == 1);
}
