#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {

    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // O loop for abaixo move a peça Torre 5 casas para a direita:

    printf("Movendo a peça Torre 5 casas para a direita:\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // O loop do while abaixo move a peça Bispo 5 casas na diagonal direita:

    printf("Movendo a peça Bispo 5 casas para a diagonal direita:\n\n");

    int bispoSeMove = 0;

    do {
        printf("Cima\n");
        printf("Direita\n");

        bispoSeMove++;

    } while (bispoSeMove < 5);

    printf("\n");

    // O loop while abaixo move a peça Rainha 8 casas para a esquerda:

    printf("Movendo a peça Rainha 8 casas para a esquerda:\n\n");
    
    int rainhaSeMove = 0;

    while (rainhaSeMove < 8) {
        
        printf("Esquerda\n");

        rainhaSeMove++;
    }

    printf("\n");

    // O loop aninhado abaixo move a peça Cavalo 2 casas para baixo e 1 casa para esquerda:

    printf("Movendo a peça Cavalo 2 casas para baixo e 1 casa para esquerda:\n\n");

    int cavaloSeMoveParaBaixo;
        
    for (cavaloSeMoveParaBaixo = 0; cavaloSeMoveParaBaixo < 2; cavaloSeMoveParaBaixo++) {

        printf("Baixo\n");

        int cavaloSeMoveParaEsquerda = 0;
        while (cavaloSeMoveParaBaixo == 1 && cavaloSeMoveParaEsquerda < 1) {

        printf("Esquerda\n");

        cavaloSeMoveParaEsquerda++;

        }

    } 
    
    
    return 0;

}