#include <stdio.h>

int main (){
    int base, alt;
    printf("Digite o valor da altura do triângulo: \n");
    scanf("%d", &alt);

    printf("Digite o valor da base do triângulo: \n");
    scanf("%d", &base);

    int area = ((alt * base)/2);
    printf("A área do triângulo é: %d", area);

}