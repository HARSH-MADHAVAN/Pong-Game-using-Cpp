#include <iostream>
#include <raylib.h>

using namespace std;

int main () {

    cout << "Starting the Game" << endl;

    const int screen_width = 1280;
    const int screen_height = 1280;

    // InitWindow(width, height, title)
    // function to create a window
    InitWindow(screen_width, screen_height, "Ping Pong!!")



    CloseWindow(); // function to destroy the window
    return 0;
}