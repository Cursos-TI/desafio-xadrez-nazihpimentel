#include <stdio.h>

int main() {

    int rainha; 
    int bispo; 
    int torre;

    for (int rainha = 0; rainha < 8; rainha ++) {
        printf("Rainha andou para Esquerda \n");
    }

    while (bispo < 5) 
    {
        printf("Bispo andou para Cima/Direita\n");
        bispo ++;
    }

    do
    {
        printf("Torre andou para Direita %d\n", torre);
        torre++;
    } while (torre <= 5);

    return 0;
    
}