#include<stdio.h>
int main(){
    int arr[5][3];
    for(int i=0;i<5;i++){ 
        printf("Enter values to put in array :");
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is :\n");
    for (int i=0;i<5;i++){
        for (int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    /*int max=arr[0];
    int min=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("max =%d\nmin=%d",max,min);*/
    
    return 0;



}