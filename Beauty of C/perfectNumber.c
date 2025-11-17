#include <stdio.h>

int main()
{
    /*
        A perfect number is a value in maths which is the sum of its divisors/factors
        and becomes the exact value again.

        For eg.)   
        
        1+2+3 = 6 // So 6 is a perfect number.
        1+2+4+7+14 = 28 // So 28 is a perfect number.
    */
    
    int num, sum=0;

    printf("Enter Input: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("It is a perfect number");
    }
    else
    {
        printf("It is not a perfect number");
    }
    return 0;
}