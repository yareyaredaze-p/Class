#include<stdio.h>
#include<math.h>
int main(){
    int num,sub_num, arm =0,rem = 0, count = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    sub_num = num;
    while (sub_num !=0)
    {
        sub_num /= 10;
        count++;
    }
    sub_num = num;
    while (sub_num !=0)
    {
        rem = sub_num % 10;
        arm += pow(rem, count);
        sub_num /= 10;
    }
    if (arm == num)
    {
        printf("Yes it is armstrong number.");
    }else{printf("Nuh uh");}
    
    
    
return 0;
}