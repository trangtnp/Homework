#include<stdio.h>

int main(){
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float ave = (a + b + c) / 3;
    printf("%.1f", ave);
    return 0;
}