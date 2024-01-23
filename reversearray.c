#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
    printf("Enter number to put in array :");
    scanf("%d",arr[i]);
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("size of an original array is :%d\n",size);
    int reversearr[size];
    for(int i=size-1,j=0;i>=0;i--,j++)
    {
        reversearr[j]=arr[i];
    }
    printf("the reverse array is:");
    for(int i=0;i<size;i++){
        printf("%d",reversearr[i]);
    }
    return 0;
}