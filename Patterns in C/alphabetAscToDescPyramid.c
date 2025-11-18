#include <stdio.h>

int main()
{
    /*
        Ques. Print the following pattern:-

           A
          ABA
         ABCBA
        ABCDCBA
    */
    
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = i - 1;
        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            char ch = (char)j+64;
            printf("%c", ch);
        }
        for (int k = 1; k <= i - 1; k++)
        {
            char ch = (char)a+64;
            printf("%c", ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}