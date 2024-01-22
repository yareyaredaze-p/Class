// Pascal's Triangle 
#include <stdio.h> 

int main() 
{ 
    int n ;
    printf("enter number for the triangle\n");
    scanf("%d",&n); 
    
        
    for (int row = 1; row <= n; row++) { 
        for (int space = 1; space <= n - row; space++) { 
            printf(" "); 
        } 

        int value = 1; 

        for (int space = 1; space <= row; space++) { 
            printf("%d ", value); 
            value = value * (row - space) / space; 
        } 
        printf("\n"); 
    } 

    return 0; 
}