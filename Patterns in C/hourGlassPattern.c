#include <stdio.h>

int main()
{
    /*
        Ques. Print the Hour Glass pattern:-

         *************
          ***********
           *********
            *******
             *****
              ***
               *
              ***
             *****
            *******
           *********
          ***********
         *************
    
    */
    
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int nsp=1;
    int range = 2*n-1;
    int nst = 2*n-1;
    int ml = range/2+1;

    for (int i=1; i<=range; i++)
    {
        for (int sp = 1; sp <= nsp; sp++)
        {
            printf(" ");
        }
        
        for (int j=1; j <= nst; j++)
        {
            printf("*");
        }
        if (i < ml)
        {
            nsp++;
            nst-=2;
        }
        else
        {
            nsp--;
            nst+=2;
        }
        printf("\n");
    }
    
    return 0;
}