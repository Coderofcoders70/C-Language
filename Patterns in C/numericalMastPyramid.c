#include <stdio.h>

int main()
{
    /*
        Print the following pattern:-

        1234567
        123 567
        12   67
        1     7
    */
    
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int nst = n;
    int nsp = 1;
    for (int ul = 1; ul <= 2 * n + 1; ul++)
    {
        printf("%d", ul);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }
        for (int q = 1; q <= nst; q++)
        {
            printf("%d", a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    
    return 0;
}