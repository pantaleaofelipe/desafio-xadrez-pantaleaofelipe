#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

// Adicionando recursividade para mover as peças Torre:

void torreSeMove (int movimentosTorre){
    if (movimentosTorre > 0) {
        printf("Direita\n");
        torreSeMove (movimentosTorre - 1);
    } 
}

// Adicionando recursividade para mover as peças Bispo:

void bispoSeMove (int movimentosBispo){
    if (movimentosBispo > 0) {
        printf("Cima\n");
        printf("Direita\n");

        bispoSeMove(movimentosBispo - 1);
    }
}

// Adicionando recursividade para mover as peças Rainha:

void rainhaSeMove (int movimentosRainha) {
    if (movimentosRainha > 0) {
        printf("Esquerda\n");
        rainhaSeMove(movimentosRainha - 1);
    }
}

// Adicionando recursividade para mover as peças Cavalo:

void cavaloSeMove (int movimentosCavalo) {
     if (movimentosCavalo > 1) {
        printf("Cima\n");
    } else if (movimentosCavalo == 1) {
        printf("Direita\n");
    }

    cavaloSeMove(movimentosCavalo - 1);
}

int main() {

    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // A peça Torre é movida 5 casas para a direita (utilizando recursividade):

    printf("Movendo a peça Torre 5 casas para a direita:\n\n");
    torreSeMove(5);

    printf("\n");

    // A peça Bispo é movida 5 casas na diagonal direita (utilizando recursividade):

    printf("Movendo a peça Bispo 5 casas para a diagonal direita:\n\n");

    bispoSeMove(5);

    printf("\n");

    // A peça Rainha é movida 8 casas para a esquerda (utilizando recursividade):

    printf("Movendo a peça Rainha 8 casas para a esquerda:\n\n");
    
    rainhaSeMove(8);

    printf("\n");

    // A peça Cavalo é movida 2 casas para cima e 1 casa para direita (utilizando recursividade):

    printf("Movendo a peça Cavalo 2 casas para cima e 1 casa para direita:\n\n");

    cavaloSeMove(3);

    return 0;

}