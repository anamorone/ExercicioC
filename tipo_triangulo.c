/******************************************************************************

Crie uma struct Triangulo para representar triângulos, armazenando o comprimento de seus lados (inteiros), e implemente as funções
bool valido( Triangulo tri );
void imprime( Triangulo tri );
bool e_retangulo( Triangulo tri );
que, respectivamente, determina se tri é um triângulo válido, imprime o tipo do triângulo tri (equilátero, isósceles, ou escaleno), e determina se tri é um triângulo retângulo (vide exercícios 2.11–12).

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

struct tp_cartesiano{
    float x;
    float y;
};

struct tp_triangulo{
    struct tp_cartesiano p1;
    struct tp_cartesiano p2;
    struct tp_cartesiano p3;
};

int dist(struct tp_cartesiano p1, struct tp_cartesiano p2){
    
    int distx = (p1.x - p2.x);
    int disty = (p1.y - p2.y);
    return(sqrt((distx*distx) + (disty*disty)));
    
}

bool valido(float lado1, float lado2, float lado3){
    if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
        return true;
    } return false;
}

void imprime(float lado1, float lado2, float lado3){
    int eq, is, esc;
    if(lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
        printf("O triângulo é equilátero");    
    } else if(lado1 == lado2 || lado1 == lado3 || lado3 == lado2){
        printf("O triângulo é isósceles");
    }else {
        printf("O triângulo é escaleno");
    }
}

bool triangulo_ret(float lado1, float lado2, float lado3){
    if(((lado1*lado1) == (lado2*lado2) + (lado3*lado3)) || ((lado2*lado2) == (lado3*lado3) + (lado1*lado1)) || ((lado3*lado3) == (lado2*lado2) + (lado1*lado1)) ){
        return true;
    } return false;
}

    
int main(){
    
    struct tp_triangulo pontos;
    float lado1, lado2, lado3;
    int i;
    
    printf("Digite os pontos do primeiro triângulo: \n");
    scanf("%f%f", &pontos.p1.x, &pontos.p1.y);
    printf("Digite os pontos do segundo triângulo: \n");
    scanf("%f%f", &pontos.p2.x, &pontos.p2.y);
    printf("Digite os pontos do terceiro triângulo: \n");
    scanf("%f%f", &pontos.p3.x, &pontos.p3.y);
    
    lado1 = dist(pontos.p1, pontos.p2);
    lado2 = dist(pontos.p1, pontos.p3);
    lado3 = dist(pontos.p2, pontos.p3);
    
    if(valido(lado1, lado2, lado3) == 1){
        
        
        imprime(lado1, lado2, lado3);
        if(triangulo_ret(lado1, lado2, lado3) == 1){
            printf("Esse triângulo é um triângulo retângulo");
        }else {
            printf("Esse triângulo não é um triângulo retângulo");
        }
        
        
        
    }else {
        printf("Esse triângulo não é valido.")
    }
    
    
}
