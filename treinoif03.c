#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

      setlocale(LC_ALL, "portuguese");

      int num; 

      printf("INFORME UM NUMERO PARA SABER SE ELE E PAR OU IMPAR: ");
      scanf("%d", &num);

     if(num % 2 == 0){
     printf("PAR ");
     }else{
             printf("IMPAR ");
     }

    system("pause");
    return 0;
}