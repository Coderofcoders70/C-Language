#include <stdio.h>

int main()
{
    /*
        Ques. Print the following hollow triangle pyramid:-

            *
           * *
          *   *
         *     *
        *********
    */
    
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    // int a = 1;   
    // for (int i = 1; i <= n; i++)
    // {
    //     for(int sp = 1; sp <= n-i; sp++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= a; j++)
    //     {
    //         if (i>1 && i<n && j>1 && j<a)
    //         {
    //             printf(" ");
    //         }
    //         else
    //         {
    //             printf("*");
    //         }
    //     }
    //     a+=2;
    //     printf("\n");
    // }

    // Another mehtod:-
    
    for (int i = 0; i < n; i++)
    {
        int nst = 2*i+1;   
        for(int sp = 1; sp <= n-i; sp++)
        {
            printf(" ");
        }
        for (int j = 1; j <= nst; j++)
        {
            if (j==1||j==nst||i==n-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        nst+=2;
        printf("\n");
    }
    
    return 0;
}