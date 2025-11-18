#include <stdio.h>

int main()
{
    /*
        Ques. Print the following pattern:-

        A
        A B
        A B C
        A B C D
    */
    
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            // int val = a + 64;
            // char ch = (char) val;
            // OR
            char ch = (char) a + 64;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    
    return 0;
}