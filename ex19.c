Um banco empresta valores a juros fixos mensais, utilizando juros simples. Leia um valor de empréstimo e a taxa de juros utilizada pelo banco e imprima os valores devidos nos 5 meses seguintes. Por exemplo, uma pessoa que pegue R$100,00 emprestados a uma taxa de juros de 1% ao mês estará devendo R$101,00 após o primeiro mês (R$100,00 + R$1,00 de juros), e R$102,00, R$103,00, R$104,00, R$105,00 após os meses seguintes.

J = P × i × t

*******************************************************************************/
#include <stdio.h>

int main()
{
    float emprestimo, juros, valortotal;
    int mes = 5;
    int i;
    
    printf("Insira o valor que deseja para o empréstimo: \n");
    scanf("%f", &emprestimo);
    printf("Insir a taxa de juros (em porcento): \n");
    scanf("%f", &juros);
    
    juros = ( juros / 100 );
    
    for( i = 1; i <= mes; i++ ){
       valortotal = ( emprestimo + ( emprestimo * juros * i ));
    }
    printf("Valor do empréstimo de acordo com os meses acumulados: %f", valortotal);
}
