//WAP to make a simple calculator with a control mechanism with switch.
#include<stdio.h>
int main(){
    char y='y',n='n',condition;
    do
    {
    float a,b,sum;
    char choice;
    printf("Calculator menu :\n");
    printf("1.Addition:\n");
    printf("2.Subtraction:\n");
    printf("3.Multiplication:\n");
    printf("4.Division:\n");
    printf("5.Exit.\n");
    printf("Choose from 1 - 5: ");
    scanf("%s",&choice);
    switch(choice){
        case '1':
            printf("Enter the numbers to add :");
            scanf("%f %f",&a,&b);
            sum=a+b;
            printf("Sum = %.2f\n",sum);
            printf("Do you want to do another calculation? ");
            scanf(" %c",&condition);
            break;
        case '2':
            printf("Enter the numbers to subtract :");
            scanf("%f %f",&a,&b);
            sum=a-b;
            printf("Subtraction = %.2f\n",sum);
            printf("Do you want to do another calculation? ");
            scanf(" %c",&condition);
            break;
        case '3':
            printf("Enter the numbers to multiply :");
            scanf("%f %f",&a,&b);
            sum=a*b;
            printf("Multiplication = %.2f\n",sum);
            printf("Do you want to do another calculation? ");
            scanf(" %c",&condition);
            break;
         case '4':
            printf("Enter the numbers to divide :");
            scanf("%f %f",&a,&b);
            if(b!=0){
            sum=a/b;
            printf("Division = %.2f\n",sum);
            printf("Do you want to do another calculation? ");
            scanf(" %c",&condition);}
            else{printf("Division = Infinity♾️\n");
            printf("Do you want to do another calculation? ");
            scanf(" %c",&condition);}
            break;
        case '5':
            printf("Thank you.");
            break;
        default:
            printf("Invalid key.");
            printf("Do you want to do another calculation? ");
            scanf(" %c",&condition);
            break;
        
    if (condition==n)
        {
            break;
        }
        
    }
    
    }while (condition==y);
    return 0;
}
