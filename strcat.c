#include<stdio.h>
#include<string.h>
int main(){
    char name[20]="Prajwol";
    char destination[20]="Bohara";
    int length=strlen(name);
    int i=length,k=0;
    while (i!=20)
    {
        name[i]=destination[k];
        i++;
        k++;
       
    } printf("%s",name);
return 0;
}