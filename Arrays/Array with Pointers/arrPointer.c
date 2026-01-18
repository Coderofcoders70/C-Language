// **************** ARRAYS USING POINTER*****************
// Example:-
#include <stdio.h>
int main()
{
    int i = 32;
    int *ptr = &i;
    
    printf("The address of i is %d\n", &i);
    ptr++;
    ptr--;
    printf("The value of ptr is %d", ptr);

    return 0;
}

// Pointer To Integer
#include <stdio.h>
int main()
{
    int i = 32;
    int *ptr = &i;
    
    printf("The address of i is %d\n", &i);
    ptr++;
    ptr--;
    printf("The value of ptr is %d", ptr);

    return 0;
}

// Pointer To Float
#include <stdio.h>
int main()
{
    float i = 32.5;
    float *ptr = &i;
    
    printf("The address of i is %u\n", &i);
    ptr++;
    printf("The value of ptr is %u", ptr);

    return 0;
}

// Pointer To Character
#include <stdio.h>
int main()
{
    char i = 'A';
    char *ptr = &i;
    
    printf("The address of i is %u\n", &i);
    ptr++;
    printf("The value of ptr is %u", ptr);

    return 0;
}
