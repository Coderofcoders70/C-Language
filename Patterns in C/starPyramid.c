#include <stdio.h>

int main()
{
    /*
        Ques. Print the following star pyramid pattern:-

             *
            ***
           *****
          *******
         *********
        ***********
    */
    
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2 * n; j++)
    //     {
    //         if (n-1-i <= j && j <= n-1+i)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }            
    //     }
    //     printf("\n");
    // }

    // int nst = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= nst; k++)
    //     {
    //         printf("*");
    //     }
    //     nst = nst + 2;
    //     printf("\n");
    // }
    
    return 0;
}