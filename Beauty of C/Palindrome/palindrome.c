// A Palindrome is a number or string that reads the same forwards and backward
#include <stdio.h>
int main()
{
    int num, copy, rev=0, rem;

    printf("Enter the number: ");
    scanf("%d", &num);

    copy=num;

    while (num!=0)
    {
        rem = num % 10;
        rev = rem + (rev*10);
        num /= 10;
    }
    
    if (copy == rev)
    {
        printf("%d is a palindrome", copy);
    }
    else
    {
        printf("%d is not a palindrome", copy);
    }

    return 0;
}