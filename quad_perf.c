#include <stdio.h>

int quad_perf(int num){
    int i, quad, cont;
    for(i = 0; i < num; i++){
        if(i * i == num){
            cont++;
        }
    }
    return cont;
}

int main()
{
    int num;
    scanf("%d", &num);
    if(quad_perf(num) == 1){
        printf("É um quadrado perfeito");
    }else{
        printf("Não é um quadrado perfeito");
    }
    
}
