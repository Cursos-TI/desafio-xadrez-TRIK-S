#include<stdio.h>

void moverCavalo(int passo, const char *dir1, const char *dir2, int padrao) {
    if (passo > 3) return;

    // Escolhe a direção baseado no padrão e passo atual
    const char *direcao = (padrao == 1)
        ? (passo == 1 ? dir1 : dir2)  //SE O PADRÃO FOR 1 EXECUTA ESSE    1 + 2
        : (passo <= 2 ? dir1 : dir2); //SE O PADRÃO FOR 2 EXECUTA ESSE    2 + 1
    printf("%s\n", direcao);
    moverCavalo(passo + 1, dir1, dir2, padrao);
}

void moverTorre(int contagem, const char *direcao)
{
    if(contagem > 0)
        {
            printf("%s ", direcao);

            moverTorre(contagem - 1, direcao);
        }
}

int main()
{
    char dir1[20], dir2[20];
    int escolha, casas, p = 1, movimentoCavalo;

    //escolhendo a peça desejada
    printf(" Qual peça deseja mover? \n\n 1) Bispo\n 2) Torre\n 3) Rainha \n 4) Cavalo \n");
    printf("\n Escolha: ");
    scanf("%i", &escolha);

    printf("\n");

    //código a ser executado seguindo a escolha do usuário
    switch(escolha)
    {
        char direcao1[10], direcao2[10];

    case 1: //movendo o bispo
        //informando a quantidade de casas a mover a peça
        printf("Qual direção deseja mover o bispo? \n esquerda / direita \nEscreva: ");
        scanf("%s", direcao1);

        printf(" Para cima ou para baixo?\n Digite(cima ou baixo): ");
        scanf("%s", direcao2);

        printf(" \nQuantas casas? ");
        scanf("%i", &casas);

        for(p = 1; p <= casas; p++)
        {
            printf(" %s \n", direcao2);
            printf(" %s \n", direcao1);
        }
        break;

    case 2: //movendo a torre
        printf("Qual direção deseja mover a torre? \n esquerda / direita / cima / baixo\n Digite: ");
        scanf("%s", direcao1);

        printf(" \nQuantas casas? ");
        scanf("%i", &casas);
    
        moverTorre(casas, direcao1);
        
        break;

    case 3: //movendo a rainha
        printf(" \nQuantas casas deseja mover a Rainha? ");
        scanf("%i", &casas);

        do
        {
            printf(" Esquerda\n");
            p++;
        }
        while(p <= casas);
        break;

    case 4: // movendo o cavalo

    printf("Escolha o padrão de movimento:\n1: 1 movimento na primeira direção + 2 na segunda\n2: 2 movimentos primeira direção + 1 na segunda\n> ");
    scanf("%d", &movimentoCavalo);

    printf("Digite a primeira direção: ");
    scanf("%19s", dir1);
    printf("Digite a segunda direção: ");
    scanf("%19s", dir2);

    printf("\nMovimento:\n");
    
    moverCavalo(1, dir1, dir2, movimentoCavalo);
    
    break;

    default:
    printf("Opção inválida!");

}

    
    return 0;
}