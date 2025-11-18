#include <stdio.h>

int main()
{
    /*
        Ques. Print the following pattern:-
        
        * * * *
        * * *
        * *
        *
    */
    
    int n; 

    printf("Enter the number: ");
    scanf("%d", &n);

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = n; j >= i; j--)
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }
   
    // Another method
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n + 1 - i; j++)
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }
        
    return 0;
}