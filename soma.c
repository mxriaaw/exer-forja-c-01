//inclui a biblioteca stdio.h que permite usar entrada e saida de infos.(printf e scanf)
#include<stdio.h>

//inclui a biblioteca stdlib.h que permite funcoes utilitarias (system())
#include<stdlib.h>

//declara a funcao principal, onde o programa comeca sua execucao
int main(){
    
    float numero1, numero2, respostaSoma;


    printf("digite o primeiro numero:  ");
    scanf("%f", &numero1);
    printf("digite o segundo numero:  ");
    scanf("%f", &numero2);

    respostaSoma = numero1 + numero2;
    printf("a soma dos numeros e: %.2f \n" ,respostaSoma);
    

    //pausar o sistema ate que o usuario pressione qualquer tecla
    system("pause");
    //finaliza programa retornando 0, indicando que tudo ocorreu bem
    return 0;
}
