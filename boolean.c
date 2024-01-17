#include<stdio.h>
int main(){
    int a=123;
    int b=456;
    int id,pass;
    printf("Enter your id and password : ");
    scanf("%d %d",&id,&pass);
    while (id!=a && pass!=b)
    {
        printf("Please enter again.\n");
        printf("ID :");
        scanf("%d",&id);
        printf("Password :");
        scanf("%d",&pass);

    }
    printf("Your id is :%d\nPassword is :%d",id,pass);
    return 0;
    


}