#include <stdio.h>

void troca(int arr[], int pos1, int pos2){
    int c = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = c;
}

void selection_sort(int arr[], int tam){
    int min, pos, prox;
    for(pos = 0; pos < tam; pos++){
        min = pos;
    for(prox = 0; prox < tam; prox++){
        if(arr[prox] < arr[min]){
            min = prox;
            troca(arr, pos, min);
        }
    
    }
    }
}



int main()
{
    int arr[10];
    int tam = 10;
    int j;
    
    // Vamos digitar os valores para compor a array:
    printf("Digite aqui os valores para ordenarmos: \n");
    for(int i = 0; i < tam; i++){
        scanf("%d", &arr[i]);
    }
    
    // Vamos executar a função e exibir o resultado:
       selection_sort(arr, tam);
        
    for(int i = 0; i < tam; i++){
        printf("%d ", arr[i]);
    }
        
    
    
}
