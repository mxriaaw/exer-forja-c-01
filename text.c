#include<stdio.h>
#include<stdlib.h>

int main(){

    //declara um string com tamanho maximo de 50 caracteres
    char nome[50];

    printf("digite seu nome:  ");
    scanf("%s", nome);
    printf("o nome digitado foi: %s \n", nome);
     
    system("pause");
    return 0;

}