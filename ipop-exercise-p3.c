#include <stdio.h>
int main()
{
    char str[50];
    int age;
    float marks;
    char gen;
    //name
    printf("enter your name :");
    scanf("%s",&str);
    //age
    printf("enter your age:");
     scanf("%d",&age);
     //marks
    printf("enter your marks:");
    scanf("%f",&marks);
    //gender
    printf("enter your gender M or F:");
    scanf(" %c",&gen);

    printf("-------Your Information-------\n");
    
    printf("Your name is: %s!\n, Your age is :%d\n, Your marks is:%f\n, Your Gender is:%c\n",str,age,marks,gen);
    return 0;


}
