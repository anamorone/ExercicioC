#include <stdio.h>
int main(){
    int n, k;
    printf("Digite o primeiro número: \n");
    scanf("%d", &n);

    printf("Digite o segundo número: \n");
    scanf("%d", &k);

    int div = (n / k);
    printf("O resultado da divisão é: %d", div);
}