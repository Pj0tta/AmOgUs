#include <stdio.h>

int main(void)
{
    int matice[4][5];
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 5; i++) {
            matice[j][i] = 5 * j + i + 1;
            printf("%3d", matice[j][i]);
        }
        printf("\n");
    }
    for (int j = 0; j < 5; j++) {
        int soucet = 0;
    
    for (int i = 0; i < 4; i++) {
        soucet += matice[i][j];

    }
    printf("Soucet [%2d]: %d\n", j, soucet);
    }
}