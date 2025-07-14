#include <stdio.h>
#include <string.h>

void ordena_string(char palavras[][100], int tam){
    int i, j;
    char temp[100];
    
    for(i = 0; i < tam; i++){
        for(j = i + 1; j < tam; j++){
            if(strcmp(palavras[i], palavras[j]) > 0){
                strcpy(temp, palavras[i]);
                strcpy(palavras[i], palavras[j]);
                strcpy(palavras[j], temp);
        }
    }
}
}
int main(){
    char palavras[5][100];
    int i, tam;
    tam = 5;
    
    for(i = 0; i < tam; i++){
        fgets(palavras[i], 100, stdin);
        palavras[i][strcspn(palavras[i], "\n")] = '\0';
    }
    
    ordena_string(palavras, tam);
    for(i = 0; i < tam; i++){
        printf("%s\n", palavras[i]);
    }
    
}
