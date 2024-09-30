#include <stdio.h>

int main(void) {
    int num1;
    int num2;
    int num3;
    printf("inserisci il primo numero : ");
    scanf("%d", &num1);
    printf("inserisci il secondo numero : ");
    scanf("%d", &num2);
    printf("inserisci il terzo numero : ");
    scanf("%d", &num3);
    if(num1>num2)
        if(num1>num3)
            printf("num1 e' il numero piu' grande : %d\n",num1);
    if(num2>num1)
        if(num2>num3)
            printf("num2 e' il numero piu' grande : %d\n",num2);
    if(num3>num1)
        if(num3>num2)
            printf("num3 e' il numero piu' grande : %d\n",num3);

}
