#include <stdio.h>
#include "raylib.h"
#include "titleScreen.h"

#define NO_EXPAND(a) #a
#define STR(a) NO_EXPAND(a)
#define FIND_ASSET(AssetPath) STR(CONTENT_PATH) AssetPath
#define FIND_CONFIG(ConfigPath) STR(CONFIG_PATH) ConfigPath

int main(void)
{
	const int screenWidth = 800;
	const int screenHeight = 640;
	InitWindow(screenWidth, screenHeight, "PacMan - Trabalho Final");
	
	SetTargetFPS(60);

	while (!WindowShouldClose())
	{

		BeginDrawing();
		ClearBackground(BLACK);
		DrawFPS(100, 100);
		titleScreen();
		//DrawText("C template for RAYLIB in VScode", (screenWidth / 10), 200, 20, YELLOW);

		EndDrawing();
	}
	return 0;
}
