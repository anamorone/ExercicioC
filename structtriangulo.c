#include <stdio.h>
#include <math.h>

struct tp_cartesiano {
    float x;
    float y;
};

struct tp_triangulo {
    struct tp_cartesiano p1;
    struct tp_cartesiano p2;
    struct tp_cartesiano p3;
};

float dist(struct tp_cartesiano a, struct tp_cartesiano b){
    float distx = a.x - b.x;
    float disty = a.y - b.y;
    
    return sqrt((distx*distx) + (disty*disty));
}


float perimetro(float lado1, float lado2, float lado3){
    return(lado1 + lado2 + lado3);
}

int main()
{
    struct tp_triangulo triangulo;
    printf("Digite os pontos do triangulo: ");
    printf("P1: \n");
    scanf("%f%f", &triangulo.p1.x, &triangulo.p1.y);
    printf("P2: \n");
    scanf("%f%f", &triangulo.p2.x, &triangulo.p2.y);
    printf("P3: \n");
    scanf("%f%f", &triangulo.p3.x, &triangulo.p3.y);
    
    float lado1 = dist(triangulo.p1, triangulo.p2);
    float lado2 = dist(triangulo.p1, triangulo.p3);
    float lado3 = dist(triangulo.p3, triangulo.p2);
    
    float per = perimetro(lado1, lado2, lado3);
    
    printf("O perímetro do seu triângulo é: %f", per);

    return 0;
}
