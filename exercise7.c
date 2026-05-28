#include<stdio.h>

int main(){
    float hours;
    scanf("%f", &hours);
    float minutes = hours * 60;
    float seconds = hours * 3600;
    printf("%.1f %.1f", minutes, seconds);
    return 0;
}