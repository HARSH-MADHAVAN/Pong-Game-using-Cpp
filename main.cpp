#include <iostream>
#include <raylib.h>

using namespace std;

int main () {

    cout << "Starting the Game" << endl;

    const int screen_width = 1280;
    const int screen_height = 800;

    // InitWindow(width, height, title)
    InitWindow(screen_width, screen_height, "Ping Pong!!"); // function to create a window
    SetTargetFPS(60); // defines the speed at which the game will work, if not defined it will work according to your computers speed.

    while (WindowShouldClose() == false) // this function returns true is the esc button is pressed of the window is closed
    {
        BeginDrawing();

        EndDrawing();
    }
    

    CloseWindow(); // function to destroy the window
    return 0;
}

// To run the game press F5