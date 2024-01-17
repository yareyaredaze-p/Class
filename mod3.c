#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter any 5 digit number :");
    scanf("%d",&a);
        if (a>=10000 && a<=99999){
            b=a%3;
            printf("The remainder after dividing with 3 =%d",b);
        } 
        else {
            printf("Invalid input!!");
        }
    return 0;

}