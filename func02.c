#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int quad(int x);

int main(){

        setlocale(LC_ALL, "portuguese");

        int num, res;

        printf("digite um numero: ");
        scanf(" %d", &num);

        res = quad(num);
        printf("o quadrado de %d e: %d \n", num, res);

        system("pause");
        return 0;
}

        int quad(int x){
        int quadrado;

        quadrado = x*x;
        return quadrado;
}

