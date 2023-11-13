#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    //CRIAR VARS
    char nome[35];
    char classe[35];
    int idade;
    int opc;
    int xp;

    //INICIALIZAR VARS
    nome[0] = '\0';
    classe[0] = '\0';
    idade = 0;
    opc = 0;
    xp = 0;

    do{
        //LIMPA TELA
        system("cls");

        //CALCULO DA CLASSE DO HEROI
        if (xp < 1000) {
            strcpy(classe, "Ferro");
        }
        else if (xp >= 1001 && xp <= 2000) {
            strcpy(classe, "Bronze");
        }
        else if (xp >= 2001 && xp <= 5000) {
            strcpy(classe, "Prata");
        }
        else if (xp >= 5001 && xp <= 7000) {
            strcpy(classe, "Ouro");
        }
        else if (xp >= 7001 && xp <= 8000) {
            strcpy(classe, "Platina");
        }
        else if (xp >= 8001 && xp <= 9000) {
            strcpy(classe, "Ascendente");
        }
        else if (xp >= 9001 && xp <= 10000) {
            strcpy(classe, "Imortal");
        }
        else if (xp >= 10001) {
            strcpy(classe, "Radiante");
        }

        //HUD
        printf("STATUS DO HEROI:");
        printf("\nNome: %s", nome);
        printf("\nIdade: %d", idade);
        printf("\nXP: %d", xp);
        printf("\nClasse: %s", classe);

        printf("\n\nO heroi de nome %s esta no nivel de %s", nome, classe);

        printf("\n\n=========== MENU ===========");
        printf("\n1- Inserir nome do heroi....");
        printf("\n2- Inserir idade do heroi...");
        printf("\n3- Inserir XP do heroi......");
        printf("\n0- Sair do programa.........");

        printf("\nEscolha uma opcao: ");
        fflush(stdin);
        scanf("%d", &opc);

        if(opc != 0){
            switch (opc){
                case 1:
                    do{
                        printf("\nQual o nome do seu heroi? ");
                        fflush(stdin);
                        gets(nome);

                        if (nome[0] == '\0') {
                            printf("\nPor favor, insira um nome valido!\n");
                        }
                    }while(nome[0] == '\0');
                break;

                case 2:
                    do {
                        printf("\nQual a idade do seu heroi? ");
                        fflush(stdin);
                        scanf("%d", &idade);
                        if (idade <= 0) {
                            printf("\nPor favor, insira uma idade valida!\n");
                        }
                    }while(idade <= 0);
                break;

                case 3:
                    do {
                        printf("\nQual a XP do seu heroi? ");
                        fflush(stdin);
                        scanf("%d", &xp);
                        if (xp <= 0) {
                            printf("\nPor favor, insira uma XP valido!\n");
                        }
                    }while(xp <= 0);
                break;

                case 0:
                    opc = 0;
                break;
                
                default:
                    printf("\nInsira uma opcao valida!\n");
                    system("pause");
                break;
            }
        }
    }while(opc != 0);

    printf("\n\n\nFIM DO PROGRAMA...");
    return 0;
}