#include <stdio.h>

int main()
{
    /*
        Ques. Print the fibonacci series:-

        0,1,1,2,3,5,8
    
    */
   
    int n;
    int n1=0, n2=1, n3;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", n1);
        n3 = n1+n2;
        n1=n2;
        n2=n3;
    }
    
    return 0;
}