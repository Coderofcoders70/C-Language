#include <stdio.h>

int main()
{
    /*
        Ques. To print a solid square of 4 x 4 as given below:-

        * * * *
        * * * *
        * * * *
    */
    
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) // no. of lines/rows
    {
        for (int j = 0; j < n; j++) // no. of stars/ columns
        {
            printf(" *");
        }
        printf("\n");
    }
    
    return 0;
}