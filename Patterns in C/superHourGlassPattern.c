#include <stdio.h>

int main()
{
    /*
        Ques. Print the following Super Hour Glass pattern :-

         *************
          *    *    *
           *   *   *
            *  *  *
             * * *
              ***
               *
              ***
             * * *
            *  *  *
           *   *   *
          *    *    *
         *************
    
    */
    
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int range = 2*n-1;
    int nsp = 1;
    int nst = range;
    int ml = nst/2+1;
    
    for (int i = 1; i <= range; i++)
    {
        for (int space = 1; space <= nsp; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= nst; j++)
        {
            int center = (nst/2)+1;
            if (range==nst||j==1||j==nst||j==center)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
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