#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("firstReadFile.txt", "r");
    int num1;
    int num2;
    int num3;
    int num4;

    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    fscanf(ptr, "%d", &num3);
    fscanf(ptr, "%d", &num4);

    printf("Values in my file are: %d, %d, %d, %d", num1,num2,num3,num4);
    fclose(ptr);

    return 0;
}