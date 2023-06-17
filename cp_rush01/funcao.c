#include <stdio.h>

void imprimir_matriz(int matriz[4][4]) {
    int i = 0;
    int j = 0;

    while (i < 4) {
        putchar(matriz[i][j] + '0'); // Imprime o elemento atual convertido para char
        putchar(' '); // Imprime um espaço entre os elementos
        j++;

        if (j == 4) {
            putchar('\n'); // Imprime uma nova linha
            j = 0;
            i++;
        }
    }
}
