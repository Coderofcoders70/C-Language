#include <stdio.h>

int main()
{
    /*
        Ques. Print the following pattern:-

        ********
        ***  ***
        **    **
        *      *
    */
    
    int n;

    printf("Enter the value: ");
    scanf("%d", &n);

    int nst = n;
    int nsp = 1;
    for (int ul = 1; ul <= 2 * n + 1; ul++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int q = 1; q <= nst; q++)
        {
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    
    return 0;
}