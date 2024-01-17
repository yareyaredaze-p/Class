#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter any two numbers :");
    scanf("%d %d",&a,&b);
    sum=a>b?a+b:a-b;
    printf("result= %d",sum);        
    return 0;

}