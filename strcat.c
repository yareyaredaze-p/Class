#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    char destination[20];
    printf("Enter the first word :");
    scanf("%s",name);
    printf("Enter the second word :");
    scanf("%s",destination);
    int length=strlen(name);
    int i=length,k=0;
    while (i!=20)
    {
        name[i]=destination[k];
        i++;
        k++;
    } 
    printf("Concatenated string: %s\n", name);
    return 0;
}
