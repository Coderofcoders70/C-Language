// **************** ARRAYS POINTER WITH LOOPS*****************
// Example 1:-
#include <stdio.h>
int main()
{
    int arr[] = {23,54,56,67,43,32};
    int *ptr = arr;
    
    for (int i = 0; i < 6; i++)
    {
        printf("Age of person %d is %d\n", i+1, *ptr++);
    }
    
    return 0;
}

// Example 2:-
#include <stdio.h>
int main()
{
    int arr[] = {23,54,56,67,43,32};
    int *ptr = &arr[0];
    
    for (int i = 0; i < 6; i++)
    {
        printf("Age of person %d is %d\n", i+1, *ptr++);
    }
    
    return 0;
}

// Example 3:-
#include <stdio.h>
int main()
{
    int arr[] = {23,54,56,67,43,32};
    int *ptr = arr;
    
    for (int i = 0; i < 6; i++)
    {
        printf("Age of person %d is %d\n", i+1, ptr[i]);
    }
    
    return 0;
}

// Example 4:-
#include <stdio.h>
int main()
{
    int arr[] = {23,54,56,67,43,32};
    int *ptr = arr;
    
    for (int i = 0; i < 6; i++)
    {
        printf("Age of person %d is %d\n", i+1, *(ptr+i));
    }
    
    return 0;
}