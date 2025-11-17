#include <stdio.h>

int main()
{
    /*
        Using time complexity we can solve the sum of n natutal numbers by saving memory 
        and time at the same time. 

        The formula of sum time complexity is:-

                    **************************
                    *   sum = n(n+1)/2       *
                    **************************
    */
    
    int n, sum=0;

    printf("Enter Input: ");
    scanf("%d", &n);

    sum = (n*n+n)/2;

    printf("Sum of %d is %d", n,sum);
    return 0;
}