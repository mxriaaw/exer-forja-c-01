#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

      setlocale(LC_ALL, "portuguese");

      int age1, age2;

      printf("INFORME A PRIMEIRA IDADE: ");
      fflush(stdin);
      scanf("%d", &age1);
      printf("INFORME A SEGUNDA IDADE: ");
      fflush(stdin);
      scanf("%d", &age2);
    
      printf("\n");

      if(age1 > age2){
            printf("A MAIOR IDADE E %d .\n", age1);
      }else if(age1 == age2){
            printf("AS IDADES SAO AS MESMAS .\n");
      }else{
            printf("A MAIOR IDADE E %d .\n", age2);
      }
            


     system("pause");
      return 0;
}