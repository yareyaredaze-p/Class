#include<stdio.h>
int main(){
    float p,r,n,SI;
    printf("Enter the principal :");
    scanf("%f",&p);
    printf("Enter the rate :");
    scanf("%f",&r);
    printf("Enter the years :");
    scanf("%f",&n);
    SI=(p*n*r)/100;
    printf("The simple interest is :%.2f",SI);
    return 0;

}