#include<stdio.h>
int main(){
    int rows,space,i,j,k;
    printf("Enter rows :");
    scanf("%d",&rows);
    space=rows;

    for(i=1;i<=rows;i++){
        for(j=space;j>0;j--){
            printf(" ");
        }

        for(k=0;k<2*i-1;k++){
            printf("*");
        }
        space-=1;
        printf("\n");
    }
    return 0;
}