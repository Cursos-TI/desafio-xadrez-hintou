#include <stdio.h>
#include <string.h>

// Número fixo de casas a serem movidas pelas peças (entrada definida no código)
int moverCasas = 3;

// Função recursiva para mover a torre
void moverTorreRecursiva(int casasRestantes, const char* direcao) {
    if (casasRestantes == 0) return;
    printf("%s\n", direcao);
    moverTorreRecursiva(casasRestantes - 1, direcao);
}

// Função recursiva e com loops aninhados para mover o bispo
void moverBispoRecursivo(int casasRestantes, const char* direcaoVertical, const char* direcaoHorizontal) {
    if (casasRestantes == 0) return;

    for (int v = 0; v < 1; v++) { // movimento vertical
        printf("%s\n", direcaoVertical);
        for (int h = 0; h < 1; h++) { // movimento horizontal
            printf("%s\n", direcaoHorizontal);
        }
    }
    moverBispoRecursivo(casasRestantes - 1, direcaoVertical, direcaoHorizontal);
}

// Função recursiva para mover a rainha
void moverRainhaRecursiva(int casasRestantes, const char* direcao) {
    if (casasRestantes == 0) return;
    printf("%s\n", direcao);
    moverRainhaRecursiva(casasRestantes - 1, direcao);
}

// Movimento do cavalo usando loops complexos com controle de fluxo
void moverCavaloAvancado() {
    int movimentos = 3; // número de movimentos em "L"
    for (int m = 0; m < movimentos; m++) {
        for (int i = 0, j = 0; i < 3 && j < 2; i++, j++) {
            if (i < 2) {
                printf("Cima\n");
                continue; // continua subindo
            }
            if (j == 1) {
                printf("Direita\n");
                break; // após subir duas vezes, move para direita
            }
        }
        printf("---\n");
    }
    printf("Acao finalizada...\n\n");
}

// Menu principal
void menuDisplay() {
    int terminou = 0;
    int escolha;

    printf("========== Jogo de Xadrez ==========\n");
    while (!terminou) {
        printf("Mover:\n1 - Torre\n2 - Bispo\n3 - Rainha\n4 - Cavalo\n5 - Sair\n\n");
        printf("Digite o numero: ");
        scanf("%d", &escolha);
        printf("\n");

        switch (escolha) {
            case 1:
                printf("Torre movendo para Direita:\n");
                moverTorreRecursiva(moverCasas, "Direita");
                break;
            case 2:
                printf("Bispo movendo para Diagonal Superior Esquerda:\n");
                moverBispoRecursivo(moverCasas, "Cima", "Esquerda");
                break;
            case 3:
                printf("Rainha movendo para Baixo:\n");
                moverRainhaRecursiva(moverCasas, "Baixo");
                break;
            case 4:
                printf("Cavalo movendo em L para Direita Superior:\n");
                moverCavaloAvancado();
                break;
            case 5:
                printf("Jogo Encerrado...\n");
                terminou = 1;
                break;
            default:
                printf("Numero invalido, tente novamente...\n");
                break;
        }
        printf("\n==================\n\n");
    }
}

int main() {
    menuDisplay();
    return 0;
}
