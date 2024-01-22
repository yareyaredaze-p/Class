#include<stdio.h>
int main(){
    int arr[5],sum=0;
    for(int i=0;i<5;i++){ 
    printf("Enter values to put in array :");
    scanf("%d",&arr[i]);
    }
   
    for(int i=0;i<5;i++){
    printf("%d\n",arr[i]);}
    for(int i=0;i<5;i++){
        sum+=arr[i];
        }
        printf("sum =%d",sum);
    return 0;



}