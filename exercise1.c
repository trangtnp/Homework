#include<stdio.h>

int main(){
    float a, b;
    scanf("%f%f", &a, &b);
    float sum = a + b;
    float difference = a - b;
    float product = a * b;
    float quotient = a / b;
    printf("%.1f %.1f %.1f %.1f", sum, difference, product, quotient);
    return 0;
}