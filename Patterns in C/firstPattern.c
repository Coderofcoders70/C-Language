#include <stdio.h>

int main()
{
    // no. of lines = no. of rows
    // no. of stars = no. of columns

    /*
        NOTE:- You will get desired output but there's a mistake while practicing 
        such syntax if you see clearly you will find that the code has both iterators of
        same name which is not a good practice. So, remember that you should give your 
        iterator or variable name always unique. 
    */
    int n, m;

    printf("Enter num of rows: ");
    scanf("%d", &n);
    
    printf("Enter num of cols: ");
    scanf("%d", &m);

    for (int i = 0; i < n; i++) /* outer loop will always be known for no. of lines or 
    rows */
    {
        for (int i = 0; i < m; i++) /* inner loop will always be known for no. of stars
        or columns */
        // for (int j = 0; j < m; j++) // Now it is correct
        {
            printf("*");
        }
        printf("\n"); // It will always help to print the new line in pattern making
    }
    
    return 0;
}