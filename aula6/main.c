#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    int idade;
    int ano_nascimento;
    //tentativa de validação de dados
    printf("olá! qual o seu nome?");
    scanf("%s",&nome);

    printf("\nQual sua idade?\n");
    scanf("%d",&idade);

    printf("Em que ano voce nasceu? ");
    scanf("%d",&ano_nascimento);

    printf("Nome: %s\nIdade: %d\n",nome,idade);

    printf("e voce nasaceu em %d",ano_nascimento );

    printf("A primeira letra do seu nome é: %C", nome[0]);
    //mostrando se voce e adulto ou criança
    if(idade>= 18 ){
        printf("\nVoce e adulto!");
    }else if (idade >= 12){
        printf("\nVoce e Adolecente");
    }else{
        printf("\nVoce e criança");
    }
    return 0;
}
