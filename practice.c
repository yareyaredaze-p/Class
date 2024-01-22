//Christmas tree
#include<stdio.h>
int main(){
    int num,k,rows,i,space;
    printf("enter rows :");
    scanf("%d",&rows);
    k=rows;
    for(i=1;i<=rows;i++){
        for(space=k;space>i;space=space-1){
            printf(" ");
        }
        for(num=1;num<=i;num++){
            printf("* ");
        }
        printf("\n");
        
    } if (space>0)
    {
        printf("  ||");
    }
    
    return 0;
}