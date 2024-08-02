#include <stdio.h>
#include "raylib.h"

#define NO_EXPAND(a) #a
#define STR(a) NO_EXPAND(a)
#define FIND_ASSET(AssetPath) STR(CONTENT_PATH) AssetPath
#define FIND_CONFIG(ConfigPath) STR(CONFIG_PATH) ConfigPath


void titleScreen(){
    Font gameFont = LoadFont("./fonts/PAC-FONT.TTF");
	DrawTextEx(gameFont, " Teste\0", (Vector2){}, (float)gameFont.baseSize,5, YELLOW);
    DrawText("Alunos:\nPedro Henrique de Oliveira\nAna Paula Alves",20,GetScreenHeight()- 80, 20, GRAY);

}