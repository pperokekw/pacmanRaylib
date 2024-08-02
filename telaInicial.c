#include <stdio.h>
#include "raylib.h"

#define NO_EXPAND(a) #a
#define STR(a) NO_EXPAND(a)
#define FIND_ASSET(AssetPath) STR(CONTENT_PATH) AssetPath
#define FIND_CONFIG(ConfigPath) STR(CONFIG_PATH) ConfigPath


void telaInicial(){
    DrawText("Novo Jogo (Digite N)", 40, 20, 30, GRAY);
    DrawText("Carregar Jogo (Digite L)", 40, 70, 30, GRAY);
    DrawText("Mostrar HighScores (Digite H)", 40, 120, 30, GRAY);
    DrawText("Sair do Jogo (Digite Q)", 40, 170, 30, GRAY);
    DrawText("Alunos:\nPedro Henrique de Oliveira\nAna Paula Alves",20,GetScreenHeight()- 80, 20, GRAY);

}