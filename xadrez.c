#include <stdio.h>

int main(){

    //INICIANDO O DESAFIO COM VARIAVEIS PARA AS PEÇAS!
printf("Desafio Xadrez:\n");
    //VARIAVEIS BISPO, TORRE, E RAINHA
int bispo, torre, rainha, cavalo;

bispo = 1;
rainha = 1;
torre = 1;
cavalo = 1;
//DECLARANDO MOVIMENTAÇÃO DA PEÇA BISPO
printf("MOVIMENTAÇÃO BISPO:\n");
//LOOP DA PEÇA BISPO 5 MOVIMENTAÇÕES PARA (DIREITA CIMA) USANDO WHILE
while (bispo <= 5)
{
    printf("DIREITA CIMA\n");
    bispo++;
}
//INICIANDO MOVIMENTAÇÃO DA PEÇA TORRE
printf("MOVIMENTAÇÃO TORRE:\n");
//LOOP DA PEÇA TORRE 5 MOVIMENTAÇÕES PARA (DIREITA) USANDO DO WHILE
do
{
    printf("DIREITA\n");
    torre++;
} while (torre <= 5);
//INICIANDO MOVIMENTAÇÃO DA PEÇA RAINHA
printf("MOVIMNTAÇÃO RAINHA\n");
//LOOP DA PEÇA RAINHA 8 MOVIMENTAÇÕES PARA A (ESQUERDA) USANDO FOR
for (rainha <= 8; rainha <= 8; rainha++)
{
    printf("ESQUERDA\n");
}
//INICIANDO MOVIMENTAÇÃO DA PEÇA CAVALO
printf("MOVIMENTAÇÃO CAVALO\n");
//LOOP ANINHADO² USANDO (WHILE & FOR) (WHILE 1 ESQUERDA) (FOR 2 BAIXO)
while (cavalo == 1)
{
    for (cavalo = 1; cavalo <= 2; cavalo++)
    {
        printf("BAIXO\n");
    }
    printf("ESQUERDA\n");
    cavalo++;
}



    return 0;
}