#include <stdio.h>

int main()
{
    /*
        Print the following pattern:-

        * * * * * *
        *         *
        *         *
        * * * * * *
    */
    
    int r, c, h, s;

    printf("Enter rows: ");
    scanf("%d", &r);
    
    printf("Enter columns: ");
    scanf("%d", &c);
    
    h = r;
    s = c;
   
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i > 1 && i < h && j > 1 && j < s)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}