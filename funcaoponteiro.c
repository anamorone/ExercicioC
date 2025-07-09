#include <stdio.h>

int dobro(int *num){
    *num *= 2;
    return(*num);
}

int main(){
    int num;
    scanf("%d", &num);
    int j = dobro(&num);
    printf("%d", j);
}
