#include<stdio.h>
int main(){
    int arr[5],sum=0,ecount=0,ocount=0;
    for(int i=0;i<5;i++){ 
    printf("Enter values to put in array :");
    scanf("%d",&arr[i]);
    }
   
    for(int i=0;i<5;i++){
    printf("%d\n",arr[i]);}
    for(int i=0;i<5;i++){
        sum+=arr[i];
        }
        printf("sum =%d\n",sum);



    for (int i = 0; i < 5; i++)
    {
        if(arr[i]%2==0){
           ecount++;
        }
        else{ocount++;}
    }
    printf("%d %d",ecount,ocount);
    return 0;



}