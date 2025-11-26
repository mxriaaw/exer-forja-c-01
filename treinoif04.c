#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

      setlocale(LC_ALL, "portuguese");

    
      int idade;

      printf("INFORME UMA IDADE: ");
      scanf("%d", &idade);

        if(idade >= 15 && idade <=18){
          printf("a idade esta entre 15 e 18: ");
        }else{
          printf("nao esta entre 15 e 18: ");
        }

      
    system("pause");
    return 0;
}