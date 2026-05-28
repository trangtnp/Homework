#include<stdio.h>

int main(){
    float length, width;
    scanf("%f%f", &length, &width);
    float area = length * width;
    float perimeter = 2 * (length + width);
    printf("%.1f %.1f", area, perimeter);
    return 0;
}