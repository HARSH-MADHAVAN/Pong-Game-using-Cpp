#include <iostream>
#include <raylib.h>

using namespace std;

int main () {

    cout << "Starting the Game" << endl;

    const int screen_width = 1280;
    const int screen_height = 800;

// function to create a window    
    // InitWindow(width, height, title)
    InitWindow(screen_width, screen_height, "Ping Pong!!"); 
    SetTargetFPS(60); // defines the speed(number of frames per second) at which the game will work, if not defined it will work according to your computers speed.

// Game Loop(Step 1)
    while (WindowShouldClose() == false) // this function returns true is the esc button is pressed of the window is closed
    {
        BeginDrawing();
// Drawing the center line
        DrawLine(screen_width / 2, 0, screen_width / 2, screen_height, WHITE);
// Drawing Ball
        DrawCircle(screen_width / 2, screen_height / 2, 20, WHITE);
// Drawing player rectangles
        DrawRectangle(10, screen_height / 2 - 60, 25,120, WHITE);
        DrawRectangle(screen_width - 35, screen_height / 2 - 60, 25, 120, WHITE);
        EndDrawing();
    }
    

    CloseWindow(); // function to destroy the window
    return 0;
}

// To run the game press F5

// void DrawRectangle(int posX, int posy, int width, int height, Color color);
// void DrawCircle(int centerX, int center Y, float radius, Color color);
// void DrawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color);
// void DrawPoly(Vector2 center, int sides, float radius, float rotation, Color color);