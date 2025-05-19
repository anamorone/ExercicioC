/******************************************************************************

Uma empresa de paisagismo foi contratada para realizar a cobertura de um terreno retangular e a instalação de uma cerca de arame
farpado. Leia o comprimento e a largura do terreno, e os preços do metro quadrado de grama e do metro da cerca de arame farpado, 
e depois calcule e imprima: (i) o perímetro do terreno, (ii) a área total a ser coberta, (iii) o custo total da grama utilizada, 
(iv) o custo total da cerca utilizada, e (v) o custo total do material utilizado no serviço.


*******************************************************************************/
#include <stdio.h>

int main()
{
 int larg, comp, pgrama, parame, perimetro, area, custo;
 printf("Insira a largura e o comprimento, respectivamente, do terreno: \n");
 scanf("%d %d", &larg, &comp);
 printf("Insira o preço do metro quadrado da grama e do metro do arame farpado: \n");
 scanf("%d %d", &pgrama, &parame);
 
 
 perimetro = ( larg + comp + larg + comp );
 area = ( larg * comp );
 pgrama = ( pgrama * area );
 parame = ( parame * perimetro );
 custo = ( pgrama + parame );

printf("O perímetro é igual a: %d\nA área é igual a: %d\nO custo total da grama utilizado é: %d\nO custo total da cerca utilizada é: %d\nO custo total do projeto é: %d\n", perimetro, area, pgrama, parame, custo);

}
