#include<stdio.h>

int main(){
    float celsius;
    scanf("%f", &celsius);
    float F = celsius * 9/5 + 32;
    printf("%.1f", F);
    return 0;
}