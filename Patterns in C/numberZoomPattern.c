#include <stdio.h>

int main()
{
    /*
        Ques. Print the following number zoom pattern:-

        4444444
        4333334
        4322234
        4321234
        4322234
        4333334
        4444444
    
    */
   
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int min = 0;
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            int a = i;
            if (a > n)
            {
                a = 2*n-a;
            }
            
            int b = j;
            if (b > n)
            {
                b = 2*n-b;
            }

            if (a < b)
            {
                min = a;
            }
            else
            {
                min = b;
            }
            //printf("%d", min);  from 1 to n pattern
            printf("%d", n+1-min); // rev pattern which we want to print
        }
        printf("\n");
    }
    
    return 0;
}