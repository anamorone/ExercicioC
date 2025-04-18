#include <stdio.h>
int main(){
    int variavel;
    printf("EScreva aqui seu número favorito: \n");
    scanf("%d", &variavel);

    int quadrado = (variavel * variavel);
    printf("Esse é o valor do quadrado dele: %d", quadrado);
}