#include <stdio.h>

int main()
{
    /*
        Ques. Print the following pattern:-

        A B C D
        A B C D
        A B C D
        A B C D
    */
    
    int n; 

    printf("Enter the value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n; j++)
        {
            int val = a + 64;
            char ch = (char) val;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    
    return 0;
}