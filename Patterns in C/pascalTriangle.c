#include <stdio.h>

int main()
{
    /*
        Ques. Print the pascal triangle pattern:-

            1
           1 1
          1 2 1
         1 3 3 1
    
    */
    
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int sp = 1; sp <= n-i; sp++)
    //     {
    //         printf(" ");
    //     }
    //     int val = 1;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%d ", val);
    //         val = val * (i-j)/(j+1);
    //     }
    //     printf("\n");
    // }

    // Another method 2
    // for (int i = 0; i < n; i++)
    // {
    //     for (int sp = 1; sp <= n-i; sp++)
    //     {
    //         printf(" ");
    //     }
    //     int val = 0;
    //     for (int j = 0; j <= i; j++)
    //     {
    //        if(i==0 || j==0){
    //             val = 1;
    //        }
    //        else
    //        {
    //             val = val * (i-j+1)/j;
    //        }
    //        printf("%d ", val);
           
    //     }
    //     printf("\n");
    // }
    
    return 0;
}