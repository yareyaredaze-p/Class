#include <stdio.h>
// Fucntion Declarations
int x =1000;
void greet();
//Main Function
int main() {
    // Variable Declaration
    int x = 5;
    //Statements
    printf("Hello world!\n%d ", x );
    // Fucntion call
    greet ();
    return 0;
}
//Function Definitions
void greet(){
    printf("Greeting from the function!\n%d ", x);
}
