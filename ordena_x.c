struct tp_coordenada{
    float x, y;
};

void ordena_x(struct tp_coordenada pontos[], int tam){
    int pos, prox, min;
    struct tp_coordenada temp;
    for(pos = 0; pos < tam; pos++){
        min = pos;
        for(prox = pos + 1; prox < tam; prox++){
            if(pontos[prox].x < pontos[min].x){
                min = prox;
            }else if(pontos[prox].x == pontos[min].x){
                if(pontos[prox].y < pontos[min].y){
                    min = prox;
                }
            }
        }
        if(min != pos){
        temp = pontos[pos];
        pontos[pos] = pontos[min];
        pontos[min] = temp;
    }
    } 
}



int main()
{
    struct tp_coordenada pontos[100];
    int tam = 3;
    int i;
    for(i = 0; i < tam; i++){
        scanf("%f%f", &pontos[i].x, &pontos[i].y);
    }
    
    ordena_x(pontos, tam);
    for(i = 0; i < tam; i++){
        printf("(%.1f, %.1f)", pontos[i].x, pontos[i].y);
    }
    
}
