#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void hello();
void bye();

int main(){
      setlocale(LC_ALL, "portuguese");

      helo();
      bye();

    system("pause");
    return 0;
}

void hello(){
    printf("hello");
 
}

void bye(){
    printf("bye");
}