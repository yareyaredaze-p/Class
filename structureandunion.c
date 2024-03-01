#include <stdio.h>
#include<string.h>
struct Student{
    char name[40];
    int age;
    float marks;
};
void display(struct Student);
struct Student increment(struct  Student);
int main(){
    struct Student s[2];
    for (int i = 0; i < 2; i++)
        {
            printf("Enter name, age, marks:");
            scanf("%s%d%f",s[i].name, &s[i].age, &s[i].marks );
        }
    for (int i = 0; i < 2; i++)
    {
        printf("Details before update: \n");
        display(s[i]);
        s[i]=increment(s[i]);
        printf("Details after update: ");
        display(s[i]);
    }
}
struct Student increment(struct Student s){
    s.marks+=1;
    s.age+=2;
    return s;
}
void display(struct Student S){
    printf("Name= %s\nAge= %d\nMarks= %.2f\n",S.name,S.age,S.marks);
}

