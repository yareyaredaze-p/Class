// Christmas tree
#include <stdio.h>

int main() {
    int num, k, rows, i, space;

    printf("Enter rows: ");
    scanf("%d", &rows);

    k = rows;
    for (i = 1; i <= rows; i++) {
        for (space = k; space > i; space--) {
            printf(" ");
        }
        for (num = 1; num <= i; num++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("%*c%*c", (rows / 2), ' ', (rows / 2) + (rows % 2), ' | ');
    printf("\n");
    
    return 0;
}