#include <stdio.h>

int mult(int a, int b){
    if(a == 0 || b == 0){
        return 0;
    }else{
        int multi = a + mult(a, b - 1);
        return multi;
    }
}

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    
    printf("%d", mult(num1, num2));

    return 0;
}
