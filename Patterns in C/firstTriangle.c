#include <stdio.h>

int main()
{
    /*
        Ques. Print the following pattern:-

        *
        * * 
        * * *
        * * * *
    */

    int n;

    printf("Enter the number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    
    return 0;
}