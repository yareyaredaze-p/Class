#include <stdio.h>
#define PI 3.14159
int main(){
    float r;
    float area;
    float peri;
    printf("Enter the radius of circle :");
    scanf("%f",&r);
    area= PI*r*r;
    peri=2*PI*r;
    printf(" Area=%.2f\nPerimeter=%.2f",area,peri);



}