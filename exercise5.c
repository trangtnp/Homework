#include<stdio.h>

int main(){
    float kilometers;
    scanf("%f", &kilometers);
    float meters = kilometers * 1000;
    float centimeters = kilometers * 100000;
    printf("%.1f %.1f", meters, centimeters);
    return 0;
}