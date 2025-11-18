#include <stdio.h>

int main()
{
    /*
        Ques. Print the following binary triangle pattern:-

        1
        0 1
        1 0 1
        0 1 0 1
    
    */
    
    int n,i,j;

    printf("Enter the number: ");
    scanf("%d", &n);

    int a;
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                a = 1; 
                printf("%d ", a);
            }
            else
            {
                a = 0;
                printf("%d ", a);
            }
            
        }
        printf("\n");
    }
    
    return 0;
}