#include <stdio.h>
#define lol 10
void dectobin(int n); 
int main()
{
    int num; 
    printf ("enter a number");
    scanf ("%d",&num);
    dectobin(num);
    return 0; 
}
void dectobin(int x)
{
    int temp = x;
    int r = 0; 
    int a[11];

    int i= 0;
    while (temp > 0)
    {
        r= temp % 2; 
        a[i] = r; 
        temp /= 2;
        i++; 
    }
    for (int n = 0; n < i; n++)
    {
        printf("%d", a[n]);
        
    }
    

}