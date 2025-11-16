#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     // ******************** SIZEOF OPERATOR IN C ****************
//     printf("Bytes in integer are: %d\n", sizeof(int));
//     printf("Bytes in float are: %d\n", sizeof(float));
//     printf("Bytes in character are: %d\n", sizeof(char));
//     return 0;
// }

// int main()
// {
//     // ******************** malloc() OR MEMORY ALLOCATION IN C ****************
//     int *ptr;

//     ptr = (int *) malloc(6 * sizeof(int));

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter the %d value for ptr %d: ", i+1, i);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Value of %d ptr is %d\n", i+1, ptr[i]);
//     }
    
//     return 0;
// }

// int main()
// {
//     // ******************** calloc() OR CONTINUOUS ALLOCATION IN C ****************
//     int *ptr;

//     ptr = (int *) calloc(6, sizeof(int)); //By default it initializes 0 to each memory block.

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter the %d value for ptr %d: ", i+1, i);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Value of %d ptr is %d\n", i+1, ptr[i]);
//     }
    
//     return 0;
// }

// int main()
// {
//     // ******************** free() IN C ****************
//     int *ptr;

//     ptr = (int *) calloc(6, sizeof(int)); //By default it initializes 0 to each memory block.

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter the %d value for ptr %d: ", i+1, i);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Value of %d ptr is %d\n", i+1, ptr[i]);
//     }
//     free(ptr);
    
//     return 0;
// }

// int main()
// {
//     // ******************** realloc() REALLOCATION OF MEMORY IN C ****************
//     int *ptr;

//     ptr = (int *) calloc(6, sizeof(int));
    
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter the %d value for ptr %d: ", i+1, i);
//         scanf("%d", &ptr[i]);
//     }
    
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Value of %d ptr is %d\n", i+1, ptr[i]);
//     }
    
//     ptr = realloc(ptr, sizeof(int));
//     for (int i = 0; i < 7; i++)
//     {
//         printf("Enter the %d value for ptr %d: ", i+1, i);
//         scanf("%d", &ptr[i]);
//     }
    
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Value of %d ptr is %d\n", i+1, ptr[i]);
//     }
    
//     return 0;
// }