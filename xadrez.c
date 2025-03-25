#include<stdio.h>
int main()
{
    int casas, escolha, p = 1;
    //escolhendo a peça desejada
    printf(" Qual peça deseja mover? \n\n 1) Bispo\n 2) Torre\n 3) Rainha \n");
    printf("\n Escolha: ");
    scanf("%i", &escolha);
    //informando a quantidade de casas a mover a peça
    printf(" \nQuantas casas deseja mover a peça: ");
    scanf("%i", &casas);
    printf("\n");

    //código a ser executado seguindo a escolha do usuário
    switch(escolha)
    {
    case 1:
        for(p = 1; p <= casas; p++)
        {
            printf(" Frente\n");
            printf(" Esquerda\n");
        }
        break;

    case 2:
        while(p <= casas)
        {
            printf(" Frente\n");
            p++;
        }
        break;

    case 3:
        do
        {
            printf(" Esquerda\n");
            p++;
        }
        while(p <= casas);
        break;
    }

    return 0;
}