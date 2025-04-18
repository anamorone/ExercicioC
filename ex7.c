#include <stdio.h>

int main(){

    float bytes, vt, seg;
    printf("Insira a quantidade de bytes de um arquivo: \n");
    scanf("%f" , &bytes);
    
    printf("Insira a velocidade de transmissão (em bytes/segundo): \n");
    scanf("%f" , &vt);

    seg = vt / bytes;
    printf("O tempo de transmissão desse arquivo é de: %.2f segundos", seg);
}