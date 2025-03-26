#include<stdio.h>
int main()
{
    int casas, escolha, p = 1, movimentoCavalo = 1;
    //escolhendo a peça desejada
    printf(" Qual peça deseja mover? \n\n 1) Bispo\n 2) Torre\n 3) Rainha \n 4) Cavalo \n");
    printf("\n Escolha: ");
    scanf("%i", &escolha);

    printf("\n");

    //código a ser executado seguindo a escolha do usuário
    switch(escolha)
    {
        char direcao1[10], direcao2[10];
    case 1:
        //informando a quantidade de casas a mover a peça
        printf("Qual direção deseja mover o bispo? \n esquerda / direita \nEscreva: ");
        scanf("%s", direcao1);

        printf(" Para cima ou para baixo?\n Escreva(cima ou baixo): ");
        scanf("%s", direcao2);

        printf(" \nQuantas casas? ");
        scanf("%i", &casas);

        for(p = 1; p <= casas; p++)
        {
            printf(" %s \n", direcao2);
            printf(" %s \n", direcao1);
        }
        break;

    case 2:
        printf("Qual direção deseja mover a torre? \n esquerda / direita / cima / baixo\n Escreva: ");
        scanf("%s", direcao1);

        printf(" \nQuantas casas? ");
        scanf("%i", &casas);

        while(p <= casas)
        {
            printf(" %s \n", direcao1);
            p++;
        }
        break;

    case 3:
        printf(" \nQuantas casas deseja mover a peça: ");
        scanf("%i", &casas);

        do
        {
            printf(" Esquerda\n");
            p++;
        }
        while(p <= casas);
        break;

    case 4:
    do
    {
        for(int i = 1; i <= 2; i++)
            {
                printf("Cima \n");
            }
        movimentoCavalo--;
        printf("Direita \n");
    }
    while(movimentoCavalo > 1);
    break;
    }

    return 0;
}