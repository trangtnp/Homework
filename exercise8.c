#include<stdio.h>

int main(){
    float principal, rate, time;
    scanf("%f%f%f", &principal, &rate, &time);
    float S = (principal * rate * time) / 10;
    printf("%.1f", S);
    return 0;
}