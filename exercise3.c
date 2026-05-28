#include<stdio.h>
#define pi 3.14

int main(){
    float radius;
    scanf("%f", &radius);
    float area = pi * radius * radius;
    float circumference = 2 * pi * radius;
    printf("%.2f %.2f", area, circumference);
    return 0;
}