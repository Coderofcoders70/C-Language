//********* Method to print only 3 digits armstrong value ********
#include <stdio.h>
#include <math.h>

int power(int base, int exp); // Function Prototype

int main()
{
    int num, sum=0, temp, digit;
    
    printf("Input: ");
    scanf("%d", &num);
    
    temp = num;
    while (num!=0)
    {
            sum += (num%10)*(num%10)*(num%10);
            num /= 10;
        }
        if (temp == sum)
        {
                printf("%d is an armstrong number", temp);
            }
    else
    {
        printf("%d is not an armstrong number", temp);
    }

    return 0;
}

int power(int base, int exp) // Function definition
{
    int result = 1;
    while (exp > 0)
    {
        
        result *= base;
        exp--;
    }
    
    return result;
}

//********* Method to print infinite digits of armstrong number ********
#include <stdio.h>
#include <math.h>

int power(int base, int exp); // Function Prototype

int main()
{
    int num, sum=0, temp, digit;
    
    printf("Input: ");
    scanf("%d", &num);
    
    temp = num;
    
    int count = 0;
    int tempNum = num;
    
    while (tempNum!=0)
    {
        tempNum /= 10;
        count++;
    }
    int digit_count = count;
    
    while (num > 0)
    {
        digit = num % 10;
        sum += power(digit, digit_count); // Function Call
        num /= 10;
    }
    if (temp == sum)
    {
        printf("%d is an armstrong number", temp);
    }
    else
    {
        printf("%d is not an armstrong number", temp);
    }

    return 0;
}

int power(int base, int exp) // Function definition
{
    int result = 1;
    while (exp > 0)
    {
        
        result *= base;
        exp--;
    }
    
    return result;
}