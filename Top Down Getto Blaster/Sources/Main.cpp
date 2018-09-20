/* Add header */

#include "Engine.h"
#include "Time.h"
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
  Engine* engine = new Engine();
  Time*   time   = Time::GetInstance();

 
  // Goes in GameStateManager
  bool gameIsRunning = true;  


  // Start Engine
  engine->Start();
  time->Start();
 
  cout << setprecision(6) << fixed;

  // Update Engine
  while (gameIsRunning)
  {
    time->Update();


    if (time->IsNextFrameReady())
    {
      cout << time->DeltaTime() << endl;
      engine->Update(time->DeltaTime());
    }

    //system("cls");
  }

  // Stop Engine
  time->End();
  engine->End();

}