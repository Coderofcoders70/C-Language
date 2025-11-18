#include <stdio.h>

int main()
{
    /*
        Ques. Print the following inverted triangle pattern:-

        *******
         *   *
          * *
           *
    */
    
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    // int a = n;
    // for (int i = n; i; i--)
    // {
    //     for (int sp = 1; sp <= n-i; sp++)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 1; j<=a; j++)
    //     {
    //         if (i<n && i>1 && j>1 && j<a)
    //         {
    //             printf(" ");
    //         }
    //         else
    //         {
    //             printf("*");
    //         }
    //     }
    //     a-=2;
    //     printf("\n");
    // }
    for (int i = 0; i < n; i++)
    {
        int nst = 2*(n-i)-1;
        for (int sp = 1; sp <= i; sp++)
        {
            printf(" ");
        }

        for (int j = 1; j<=nst; j++)
        {
            if (j==1||j==nst||i==0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        nst-=2;
        printf("\n");
    }
    
    return 0;
}