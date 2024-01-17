#include <stdio.h>
int main(){
  int num,fac; 
  int count=1;
  printf("Enter a number for factorial :");
  scanf("%d",&num);
  if (num<0)
  {
    printf("Please enter a non-negative number :");
    scanf("%d",&num);
  }
  while (count<=num)
  {
    fac*=num;
    count++;
  }
  printf("Factorial =%d",fac);
  return 0;
  
  
}