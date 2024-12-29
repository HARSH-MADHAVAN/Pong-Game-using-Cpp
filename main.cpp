#include <iostream>
#include <raylib.h>

using namespace std;

class Ball{
public:
    float x, y;
    int speed_x, speed_y;
    int radius;

void Draw() {
    DrawCircle(x, y, radius, WHITE);
}

void Update() {
    x += speed_x;
    y += speed_y;
    // Bouncing the ball by avoiding the collosion
    if (y + radius >= GetScreenHeight() || y - radius <= 0)
    {
        speed_y *= -1;
    }
    if (x + radius >= GetScreenWidth() || x - radius <= 0)
    {
        speed_x *= -1;
    } 
    
}
};

class Paddle {
public:
float x, y;
float width, height;
int speed;

void Draw() {
    DrawRectangle(x, y, width, height, WHITE);
}
};

Ball ball;
Paddle player; //creating a player object

int main () {

    cout << "Starting the Game" << endl;

    const int screen_width = 1280;
    const int screen_height = 800;

// function to create a window    
    // InitWindow(width, height, title)
    InitWindow(screen_width, screen_height, "Ping Pong !!!"); 
    SetTargetFPS(60); // defines the speed(number of frames per second) at which the game will work, if not defined it will work according to your computers speed.

    ball.radius = 20;
    ball.x = screen_width / 2;
    ball.y = screen_height / 2;
    ball.speed_x = 7;
    ball.speed_y = 7;
    // initializing the player object
    player.width = 25;
    player.height = 120;
    player.x = screen_width - player.width - 10;
    player.y = screen_height / 2 - player.height / 2;
    player.speed = 6;

    // Game Loop(Step 1)
    while (WindowShouldClose() == false) // this function returns true is the esc button is pressed of the window is closed
    {
        BeginDrawing();

        // Updating
        ball.Update();

        ClearBackground(BLACK);
        // Drawing the center line
        DrawLine(screen_width / 2, 0, screen_width / 2, screen_height, WHITE);
        ball.Draw();
        // Drawing Ball
        // DrawCircle(screen_width / 2, screen_height / 2, 20, WHITE);
// Drawing player rectangles
        DrawRectangle(10, screen_height / 2 - 60, 25,120, WHITE);
        player.Draw(); //calling the player object

        EndDrawing();
    }
    

    CloseWindow(); // function to destroy the window
    return 0;
}

// To run the game press F5

