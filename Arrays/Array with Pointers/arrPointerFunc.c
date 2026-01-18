// **************** ARRAYS POINTER WITH FUNCTION*****************
// Example 1:-
#include <stdio.h>

void age(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Age of person %d is %d\n", i+1, *ptr++);
    }
    
}

int main()
{   
    int arr[]={16,52,65,35,45};
    int num;

    printf("Enter the count of people: ");
    scanf("%d", &num);

    age(arr,num);

    return 0;
}

// Example 2:-
// From the above example we can transform our pointer to array in the below example:- 
#include <stdio.h>

void age(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Age of person %d is %d\n", i+1, ptr[i]);
    }
    
}

int main()
{   
    int arr[]={16,52,65,35,45};
    int num;

    printf("Enter the count of people: ");
    scanf("%d", &num);

    age(arr,num);

    return 0;
}