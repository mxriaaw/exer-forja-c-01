#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float sal;

    printf("QUAL SEU SALARIO?");
    fflush(stdin);
    scanf("%f", &sal);

    if(sal > 5000){
        printf("SEU SALARIO E MAIOR QUE R$5.000,00");
    }else{
        printf("SEU SALARIO E MENOR QUE R$5.000,00");
    }

    system("pause");
    return 0;
}