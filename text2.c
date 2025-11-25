#include<stdio.h>
#include<stdlib.h>

int main(){

    //declara um string com tamanho maximo de 50 caracteres
    char nome[50];

    printf("digite seu nome:  ");
    //le o nome ate 49 caracteres, incluindo espacoes
    fgets(nome, 50, stdin);
    printf("o nome digitado foi: %s \n", nome);
     
    system("pause");
    return 0;

}