#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("putcTextFile.txt", "w");
    putc('L', ptr);
    putc('a', ptr);
    putc('k', ptr);
    putc('s', ptr);
    putc('h', ptr);
    putc('a', ptr);
    putc('y', ptr);
    putc('a', ptr);
    fclose(ptr);
    
    return 0;
}