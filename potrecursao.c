#include <stdio.h>

int power(int a, unsigned int b){
    if(b == 0){
        return 1;
    }else if(b % 2 == 0){
        int temp = power(a, (b/2));
        return temp * temp;
    }else {
        a = a * power(a, b - 1);
        return a;
    }
}

int main()
{
    int a;
    unsigned int b;
    scanf("%d%u", &a, &b);
    printf("%d", power(a, b));
}
