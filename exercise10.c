#include<stdio.h>

int main(){
    int dividend, divisor;
    scanf("%d%d", &dividend, &divisor);
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    printf("%d %d", quotient, remainder);
    return 0;
}