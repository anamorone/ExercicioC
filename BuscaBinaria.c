#include <stdio.h>

int busca(int arr[], int key, int tam){
    int meio;
    int inicio = 0;
    int fim = tam - 1;
    while(inicio <= fim){
        meio = ((inicio + fim) / 2);
        if(arr[meio] == key){
            return(meio);
        }else if(arr[meio] < key){
            inicio = meio + 1;
        } else{
            fim = meio - 1;
        }
        
    }
    return -1;
}


int main()
{
    int arr[4];
    int i, tam, key;
    tam = 4;
    
    // digitar os valores ordenados
    printf("Digite a lista de números: \n");
    for(i = 0; i < tam; i++){
        scanf("%d", &arr[i]);
    }
    // saber a posição do número desejado
    printf("Digite o número que você deseja saber a posição: \n");
    scanf("%d", &key);
    
    int j = busca(arr, key, tam);
    
    // printando o resultado
    printf("A posição é: %d", j);
    
    }
    
