/******************************************************************************
Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos. ´
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral. ´
(d) Encontre o aluno com menor media geral ´
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovacao.
*******************************************************************************/
#include <stdio.h>

struct tp_cadastro {
    char nome[100];
    int matricula;
    float p1, p2, p3;
    
};


int main()
{
    struct tp_cadastro alunos[5];
    int i;
    int maior_nota, maior_media, menor_media;
    maior_nota = 0;
    maior_media = 0;
    menor_media = 0;
    float media[5];
    
    for(i = 0; i < 5; i++){
        printf("Digite a matrícula: \n");
        scanf("%d", &alunos[i].matricula);
        getchar();
        printf("Digite o nome: \n");
        fgets(alunos[i].nome, 100, stdin);
        printf("Digite a nota da p1: \n");
        scanf("%f", &alunos[i].p1);
        printf("Digite a nota da p2: \n");
        scanf("%f", &alunos[i].p2);
        printf("Digite a nota da p3: \n");
        scanf("%f", &alunos[i].p3);
    }
    
    // calculo da media
    
    for(i = 0; i < 5; i++){
       media[i] = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3) / 3;
    }
    
    // maior nota p1
    
    for(i = 0; i < 5; i++){
       if(alunos[i].p1 > alunos[maior_nota].p1){
           maior_nota = i;
       }
    }
    
    // maior media
    for(i = 0; i < 5; i++){
        if(media[i] > media[maior_media]){
            maior_media = i;
        }
    }
    
     // menor media
    for(i = 0; i < 5; i++){
        if(media[i] < media[menor_media]){
            menor_media = i;
        }
    }
    
    printf("O aluno de maior média foi: %s\n", alunos[maior_media].nome);
    printf("O aluno de menor média foi: %s\n", alunos[menor_media].nome);
    printf("O aluno de maior nota na p1 foi: %s\n", alunos[maior_nota].nome);
    
    // aprovação ou reprovação

        for(i = 0; i < 5; i++){
            if(media[i] >= 6.0){
            printf("O aluno %s foi aprovado\n", alunos[i].nome);
        }else {
            printf("O aluno %s foi reprovado\n", alunos[i].nome);
        }
        }
    }
        
}
