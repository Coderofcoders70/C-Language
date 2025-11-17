#include <stdio.h>

int main()
{
    FILE *ptr; // ptr --> Pointer of a file.

    ptr = fopen("Sample.txt", "mode"); // mode --> 'r' --> to read a file.
    ptr = fopen("Sample.txt", "mode"); // mode --> 'w' --> write a file.
    fclose(ptr); // To close a file.
    
    return 0;
}