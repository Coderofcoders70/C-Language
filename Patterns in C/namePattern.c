#include <stdio.h>
#include <string.h>

int main()
{
    /*
        Ques. Print your name like the following:-

        R
        RA
        RAM
    
    */
    
    // char name[] = "LAKSHAYA";
    // char name[] = "RITIK";
    // char name[] = "RAM";
    char name[10];

    printf("Enter Name: ");
    scanf("%s", &name);

    int len = strlen(name);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }
    
    return 0;
}