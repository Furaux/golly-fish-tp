#include "raylib.h"
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Turtle Tim");

    SetTargetFPS(60);               
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
       // DecTextures
        Texture2D TTRight = LoadTexture("res/TTRight.png");
        Texture2D STARTSCREEN = LoadTexture("res/STARTSCREEN.png");

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(DARKGREEN);
            DrawTexture(STARTSCREEN,0,0,WHITE);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    
    //--------------------------------------------------------------------------------------

    return 0;
}

