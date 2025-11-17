#include <stdio.h>

/*
    Ques1. Create a string using " " and print its content using a loop.
*/  

int main()
{
    char str[] = "Lakshaya";
    char *ptr = str;

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    
    return 0;
}