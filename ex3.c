#include <stdio.h>

int main(){
    int cubo;
    printf("Digite o valor do lado do cubo: \n");
    scanf("%d", &cubo);

    int area = (cubo * cubo * cubo);
    printf("A área do cubo é: %d", area);
}