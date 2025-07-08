#include <stdio.h>
#include <string.h>

int busca(char palavras[][100], char preferida[], int tam){
    int i;
    
    for(i = 0; i < tam; i++){
        if(strcmp(palavras[i], preferida) == 0){
            return i;
        }
        
    }
    return - 1;
}

int main()
{
    char palavras[10][100];
    char preferidas[5][100];
    int tam = 10;
    int i, j, num;
    
    // Usuário irá digitar as palavras
    printf("Digite as palavras que você deseja armazenar na biblioteca: ");
    for(i = 0; i < tam; i++){
        fgets(palavras[i], 100, stdin);
        palavras[i][strcspn(palavras[i], "\n")] = 0;
    }
    
    // Usuário irá digitar as 10 palavras que ele deseja saber as posições
    printf("Agora, digite as 5 palavras que você deseja saber as posições: ");
    for(i = 0; i < 5; i++){
        fgets(preferidas[i], 100, stdin);
        preferidas[i][strcspn(preferidas[i], "\n")] = 0;
        
        
    }
    
    printf("O local na biblioteca que essas palavras estão armazenadas é: ");
    for(i = 0; i < 5; i++){
    j = busca(palavras, preferidas[i], tam);
    
    if(j != -1){
        printf("As posições encontradas são: %d\n", j);
    }else {
        printf("Não encontramos as posições");
    }
    
    }
}
