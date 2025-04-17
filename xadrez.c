#include <stdio.h>

int main(){

printf("Desafio Xadrez:\n");

int bispo, torre, rainha;

bispo = 1;
rainha = 1;
torre = 1;

printf("MOVIMENTAÇÃO BISPO:\n");

while (bispo <= 5)
{
    printf("DIREITA CIMA\n");
    bispo++;
}
printf("MOVIMENTAÇÃO TORRE:\n");
do
{
    printf("DIREITA\n");
    torre++;
} while (torre <= 5);

printf("MOVIMNTAÇÃO RAINHA\n");
for (rainha <= 8; rainha <= 8; rainha++)
{
    printf("ESQUERDA\n");
}

    return 0;
}