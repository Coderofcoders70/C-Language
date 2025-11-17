#include <stdio.h>
#include <stdlib.h>

// ********************* PRACTICE SET - 11 *********************************
// ********************* DYNAMIC MEMORY ALLOCATION *************************

/*
    Ques1. W.a.p to dynamically create an array of size 6 capable of storing 6 integers.
*/
// int main()
// {
//     int *ptr;

//     ptr = (int *) malloc(6 * sizeof(int));

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter the %d value for ptr %d: ", i+1, i);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d value of ptr %d is %d\n", i+1, i, ptr[i]);
//     }
//     free(ptr);
    
//     return 0;
// }

/*
    Ques2. Use the array in problem1 to store the 6 integers entered by the user.
*/
// int main()
// {
//     int *ptr;
//     int n;

//     printf("Enter a range of arrray: ");
//     scanf("%d", &n);

//     ptr = (int *) malloc(n * sizeof(int));

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the %d value for ptr %d: ", i+1, i);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d value of ptr %d is %d\n", i+1, i, ptr[i]);
//     }
//     free(ptr);

//     return 0;
// }

/*
    Ques3. Solve problem1 using calloc().
*/
// int main()
// {
//     int *ptr;

//     ptr = (int *) calloc(6, sizeof(int));

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter the %d value for ptr %d: ", i+1, i);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d value of ptr %d is %d\n", i+1, i, ptr[i]);
//     }
//     free(ptr);

//     return 0;
// }

/*
    Ques4. Create an array dynamically capable of storing 5 integers. Now use realloc so 
    that it can now store 10 integers.
*/
// int main()
// {
//     int *ptr;

//     ptr = (int *) malloc(5 * sizeof(int));
    
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the %d value for ptr %d: ", i+1, i);
//         scanf("%d", &ptr[i]);
//     }
    
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d value of ptr %d is %d\n", i+1, i, ptr[i]);
//     }
    
//     ptr = realloc(ptr, sizeof(int));
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter the %d value for ptr %d: ", i+1, i);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d value of ptr %d is %d\n", i+1, i, ptr[i]);
//     }
//     free(ptr);

//     return 0;
// }

// /*
//     Ques5. Create an array of multilpication table of 7 upto 10 (7 x 10 = 70). Use realloc
//     to make it store 15 numbers (from 7 x 1 to 7 x 15).
// */
// int main()
// {
//     int *ptr;
//     int n = 7;
//     ptr = (int *) calloc(10, sizeof(int));
    
//     printf("\nMultiplication table of %d from %d X 1 to %d X 10:\n", n, n, n);
//     for (int i = 0; i < 10; i++)
//     {
//         int mult = n * (i+1);
//         printf("%d X %d = %d\n", n, i+1, mult);
//     }
    
//     ptr = realloc(ptr, sizeof(int));
    
//     printf("\nMultiplication table of %d from %d X 1 to %d X 15:\n", n, n, n);
//     for (int i = 0; i < 15; i++)
//     {
//         int mult = n * (i+1);
//         printf("%d X %d = %d\n", n, i+1, mult);
//     }
//     free(ptr);

//     return 0;
// }

/*
    Ques6. Attempt problem 4 using calloc().
*/
// int main()
// {
//     int *ptr;

//     ptr = (int *) calloc(5, sizeof(int));
    
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the %d value for ptr %d: ", i+1, i);
//         scanf("%d", &ptr[i]);
//     }
    
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d value of ptr %d is %d\n", i+1, i, ptr[i]);
//     }
    
//     ptr = realloc(ptr, sizeof(int));
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter the %d value for ptr %d: ", i+1, i);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d value of ptr %d is %d\n", i+1, i, ptr[i]);
//     }
//     free(ptr);

//     return 0;
// }