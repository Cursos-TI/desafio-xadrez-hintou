#include <stdio.h>
#include <string.h>

int moverCasas;

// lógica do movimento da torre
void moverTorre(){
    int direcao;
    int casasError = 1;
    int direcaoError = 1;

    while(casasError == 1){
        printf("Deseja mover quantas casas (1 - 5): ");
        scanf("%d", &moverCasas);
        if(moverCasas > 5){
            printf("Numero muito alto, tente novamente...\n\n");
        }else if(moverCasas < 1){
            printf("E necessario pelo menos mover uma casa, tente novamente...\n\n");
        }else{
            casasError = 0;
        }
    }

    while(direcaoError == 1){
        printf("\nDeseja mover em qual direcao?\n1 - Esquerda\n2 - Cima\n3 - Direita\n4 - Baixo\n\nDigite sua resposta: ");
        scanf("%d", &direcao);

        if(direcaoError > 4 || direcaoError < 1){
            printf("Direcao invalida, tente novamente...\n\n");
        }
        direcaoError = 0;
    }

    switch (direcao)
    {
        case 1:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para esquerda!\n");
            }
            break;
        case 2:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para cima!\n");
            }
            break;
        case 3:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para direita!\n");
            }
            break;
        case 4:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para baixo!\n");
            }
            break;
    }
    
    printf("Acao finalizada...\n\n");
    moverCasas = 0;
}

// lógica do movimento do bispo
void moverBispo(){
    int direcao;
    int casasError = 1;
    int direcaoError = 1;

    while(casasError == 1){
        printf("Deseja mover quantas casas (1 - 5): ");
        scanf("%d", &moverCasas);
        if(moverCasas > 5){
            printf("Numero muito alto, tente novamente...\n\n");
        }else if(moverCasas < 1){
            printf("E necessario pelo menos mover uma casa, tente novamente...\n\n");
        }else{
            casasError = 0;
        }
    }

    while(direcaoError == 1){
        printf("\nDeseja mover em qual direcao?\n1 - Diagonal Superior Esquerda\n2 - Diagonal Superior Direita\n3 - Diagonal Inferior Direita\n4 - Diagonal Inferior Esquerda\n\nDigite sua resposta: ");
        scanf("%d", &direcao);

        if(direcaoError > 4 || direcaoError < 1){
            printf("Direcao invalida, tente novamente...\n\n");
        }
        direcaoError = 0;
    }

    switch (direcao)
    {
        case 1:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para Diagonal Superior Esquerda!\n");
            }
            break;
        case 2:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para Diagonal Superior Direita!\n");
            }
            break;
        case 3:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para Diagonal Inferior Direita!\n");
            }
            break;
        case 4:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para Diagonal Inferior Esquerda!\n");
            }
            break;
    }
    
    printf("Acao finalizada...\n\n");
    moverCasas = 0;
}


// lógica do movimento da rainha
void moverRainha(){
    int direcao;
    int casasError = 1;
    int direcaoError = 1;

    while(casasError == 1){
        printf("Deseja mover quantas casas (1 - 8): ");
        scanf("%d", &moverCasas);
        if(moverCasas > 8){
            printf("Numero muito alto, tente novamente...\n\n");
        }else if(moverCasas < 1){
            printf("E necessario pelo menos mover uma casa, tente novamente...\n\n");
        }else{
            casasError = 0;
        }
    }

    while(direcaoError == 1){
        printf("\nDeseja mover em qual direcao?\n1 - Esquerda\n2 - Diagonal Superior Esquerda\n3 - Cima\n4 - Diagonal Superior Direita\n5 - Direita\n6 - Diagonal Inferior Direita\n7 - Baixo\n8 - Diagonal Inferior Esquerda\n\nDigite sua resposta: ");
        scanf("%d", &direcao);

        if(direcao > 8 || direcao < 1){
            printf("Direcao invalida, tente novamente...\n\n");
        }
        direcaoError = 0;
    }

    switch (direcao)
    {
        case 1:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para Esquerda!\n");
            }
            break;
        case 2:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para Diagonal Superior Esquerda!\n");
            }
            break;
        case 3:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para Cima!\n");
            }
            break;
        case 4:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para Diagonal Superior Direita!\n");
            }
            break;
        case 5:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para Direita!\n");
            }
            break;
        case 6:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para Diagonal Inferior Direita!\n");
            }
            break;
        case 7:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para Baixo!\n");
            }
            break;
        case 8:
            for(int i = 0; i < moverCasas; i++){
                printf("Moveu para Diagonal Inferior Esquerda!\n");
            }
            break;
    }
    
    printf("Acao finalizada...\n\n");
    moverCasas = 0;
}

// menu de movimento
void menuDisplay(){
    int terminou;
    int escolha;

    printf("========== Jogo de Xadrez ==========\n");
    while(terminou == 0){
        printf("Mover:\n1 - Torre\n2 - Bispo\n3 - Rainha\n4 - Sair\n\n");
        printf("Digite o numero: ");
        scanf("%d", &escolha);

        switch(escolha){
            case 1:
                moverTorre();
                break;
            case 2:
                moverBispo();
                break;
            case 3:
                moverRainha();
                break;
            case 4:
                printf("Jogo Encerrado...\n");
                terminou = 1;
                break;
            default:
                printf("Numero invalido, tente novamente...\n\n");
                break;
        }
    }

}

int main(){
    menuDisplay();
    return 0;
}