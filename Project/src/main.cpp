#include <iostream>
#include "raylib.h"

int main(){
    std::cout << "Hello World!\n";
    InitWindow(800, 600, "Window");

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        EndDrawing();
    }
    return 0;
}