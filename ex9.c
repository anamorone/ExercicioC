#include <stdio.h>

int main(){
    float raio, volume;
    printf("Escreva o tamanho (em centímetros) do raio de uma esfera: \n");
    scanf("%f", &raio);

    volume = (4.0/3.0) * 3.14 * (raio * raio * raio);
    printf("O volume da esfera é igual a: %.1f" , volume);
}