#include <stdio.h>

// int main()
// {
//     FILE *ptr;
    
//     ptr = fopen("getcTextFile.txt", "r");
//     // char ch = fgetc(ptr);

//     printf("%c\n", fgetc(ptr));
//     printf("%c\n", fgetc(ptr));
//     printf("%c\n", fgetc(ptr));
//     printf("%c\n", fgetc(ptr));
//     printf("%c\n", fgetc(ptr));
//     printf("%c\n", fgetc(ptr));
//     printf("%c\n", fgetc(ptr));
//     printf("%c\n", fgetc(ptr));
//     fclose(ptr);
    
//     return 0;
// }

// *************** EOF - End Of File ******************
int main()
{
    FILE *ptr;
    
    ptr = fopen("getcTextFile.txt", "r");
    char c = fgetc(ptr);

    while (c != EOF)
    {
        printf("%c", c);
        c = getc(ptr);
    }
    
    fclose(ptr);
    
    return 0;
}