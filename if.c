#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (num<0)
    {
        while (num<0)
        {
            printf("Enter a positive number please :");
            scanf("%d",&num);
        }
        
    }
    
        int fac=1;
        while (num>0)
        {
            fac=fac*num;
            num--;
             
        }
        printf("Factorial= %d",fac);
    
       
        
    
   
    return 0;
}


   