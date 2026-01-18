/*
    Absolute value is the value which will always return positive value of any number
    whether that value has taken as negative or positive. It will always return 
    positive value of that number.

    For eg.)
    -7 = 7
    5 = 5
*/

// Example 1:
#include <stdio.h>
int main()
{    
    int abs=0, num;

    printf("Enter Input: ");
    scanf("%d", &num);

    if (num < 0)
    {
        abs = abs + (-(num));
        printf("Absoute Value: %d", abs);
    }
    else
    {
        abs = abs + num;
        printf("Absoute Value: %d", abs);
    }

    return 0;
}
    
// Example 2:
#include <stdio.h>
int main()
{    
    int abs=0, num;

    printf("Enter Input: ");
    scanf("%d", &num);

    if (num < 0)
    {
        abs = -1 * num;
        printf("Absoute Value: %d", abs);
    }
    else
    {
        abs = 1 * num;
        printf("Absoute Value: %d", abs);
    }
    return 0;
}