#include <stdio.h>
#include <stdlib.h>

int main(){
    system("/bin/clear");

    int num;
    printf("nos diga 1 ano e lhe diremos ele é bissexto\n");
    scanf("%d",&num);
    if(num %4 > 0)
        printf("o ano %d não é bissexto\n", num);
    else
        printf("o ano %d é bissexto\n", num);

    return 0;

}