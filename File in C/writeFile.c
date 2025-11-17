#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("secWriteFile.txt", "w");
    int num = 32;
    fprintf(ptr, "The value is %d\n", num);
    fprintf(ptr, "The file generated automatically!!");
    fclose(ptr);

    return 0;
}