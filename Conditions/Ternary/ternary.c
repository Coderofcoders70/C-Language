//___________Ternary operator____________ 

// Syntax:- (condition) ? (true) : (false);
#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    (a < b) ? printf("b is greater than a") : printf("a is greater than b");
    return 0;
}