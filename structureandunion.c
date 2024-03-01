#include <stdio.h>
#include<string.h>
struct Student{
    char name[40];
    int age;
    float marks;
};
void display(struct Student);
struct Student incrementMarks(struct  Student);
struct Student incrementAge(struct  Student);
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
        s[i]=incrementMarks(s[i]);
        s[i]=incrementAge(s[i]);
        printf("Details after update: ");
        display(s[i]);
    }
}
struct Student incrementMarks(struct Student s){
    s.marks+=1;
    return s;
}
struct Student incrementAge(struct Student s){
    s.age+=2;
    return s;
}
void display(struct Student S){
    printf("Name= %s\nAge= %d\nMarks= %.2f\n",S.name,S.age,S.marks);
}

