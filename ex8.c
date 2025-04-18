#include <stdio.h>

int main(){
    float ft, temp;
    printf("Insira a temperatura (em graus Celsius): \n");
    scanf("%f", &temp);

    ft = 1.8 * temp +32;
    printf("A temperatura em Fahrenheit é: %.2f", ft);
}