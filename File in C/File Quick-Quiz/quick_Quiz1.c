#include <stdio.h>

// Ques. Modify the program to check whether the file exists or not before opening the file.

int main()
{
    FILE *ptr;

    ptr = fopen("sampleFile.txt", "r");
    char c = getc(ptr);
    if (ptr == NULL)
    {
        printf("This file does not exists!!");
    }
    else
    {
        while (c != EOF)
        {
            printf("%c", c);
            c = getc(ptr);
        }
    }
    fclose(ptr);

    return 0;
}