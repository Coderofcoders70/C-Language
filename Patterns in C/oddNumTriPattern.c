#include <stdio.h>

int main()
{
    /*
        Ques. Print the following pattern:-

        1
        1 3
        1 3 5
        1 3 5 7
    */
    
    int n; 

    printf("Enter the value: ");
    scanf("%d", &n);
    
    // for (int i = 1; i <= n; i++)
    // {
    //     int a = n + i - n;
    //     for (int j = 1; j <= a + a; j++)
    //     {
    //         if (j % 2 != 0)
    //         {
    //             printf("%d ", j);
    //         }
    //     }
    //     printf("\n");
    // }

    // ***************REMEMBER A(n) = 2n - 1;**************
    // for (int i = 1; i <= 2 * n - 1; i = i + 2)
    // { 
    //     printf("%d ", i);
    // }
    
    // Another method:-
    // for (int i = 1; i <= n; i++)
    // {
    //     int a = 1;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ", a);
    //         a = a + 2;
    //     }
    //     printf("\n");
    // }
    return 0;
}