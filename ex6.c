#include <stdio.h>

int main(){

    float valor, desconto;
    desconto = 0.10;
    printf("Insira o valor do produto desejado: \n");
    scanf("%f", &valor);

    valor = valor - (desconto * valor);
    printf("O valor com desconto é: [%.2f]", valor);
}