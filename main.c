#include <stdio.h>
#include "raylib.h"
#include "telaInicial.h"
#include "carregarJogo.h"
#define NO_EXPAND(a) #a
#define STR(a) NO_EXPAND(a)
#define FIND_ASSET(AssetPath) STR(CONTENT_PATH) AssetPath
#define FIND_CONFIG(ConfigPath) STR(CONFIG_PATH) ConfigPath

typedef enum Tela{INICIAL = 0, CARREGAR_JOGO = 1 , HIGHSCORES = 2}  Tela;

int main(void)
{
	const int larguraTela = 800;
	const int alturaTela = 640;
	InitWindow(larguraTela, alturaTela, "PacMan - Trabalho Final");

	Tela telaAtual =  INICIAL;

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{

		BeginDrawing();
		ClearBackground(BLACK);
		
		switch(telaAtual)
		{

			case INICIAL:
			{	
					
					telaInicial();
			}break;
			case CARREGAR_JOGO:{
				if(IsKeyPressed(KEY_L)){
				carregaJogo();
				}
			}break;
		
		} 
		

		EndDrawing();
	}
	return 0;
}
