#include <stdio.h>

int main(){
    float peso, alt;
    printf("Insira seu peso: \n");
    scanf("%f", &peso);

    printf("insira sua altura \n");
    scanf("%f", &alt);

    float imc = (peso / (alt * alt));
    printf("Esse é seu IMC: %f", imc);
}