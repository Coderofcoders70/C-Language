// ************************* ARRAY USING FOR LOOP ***********************
// Example 1:-
#include <stdio.h>
int main()
{
    int marks[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("Marks of student %d is %d\n", i+1, marks[i]);
    }
    
    return 0;
}

// Example 2:-
#include <stdio.h>
int main()
{
    int marks[]={89,56,68,55,75,63};

    for (int i = 0; i < 6; i++)
    {
        printf("Marks of student %d is %d\n", i+1,marks[i]);
    }
    
    return 0;
}