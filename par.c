#include <stdio.h>
#include <stdlib.h>//comando clrscr para limpar a tela

int main(){

    int num;
    printf("digite um numero e lhe diremos se ele é par ou impar\n");
    scanf("%d",&num);
    if (num %2 == 0)
        printf("o numero %d é par\n", num);
    else
        printf("o numero %d é impar\n", num);

}        