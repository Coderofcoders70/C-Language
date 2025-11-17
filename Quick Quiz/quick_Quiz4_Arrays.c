#include <stdio.h>

/* Ques1.)
    1. Addition of a number to pointer.
    2. Subtraction of a number to pointer.
    3. Subtraction of one pointer from another.
    4. Comparison of two pointer variables.

    Try these operations on another variable by creating pointers in a separate program.
    Demonstrate all the four operarions.

*/

// 1. Addition of a number to pointer.
// int main()
// {
//     int i=2;
//     int *ptr = &i;

//     printf("The address of i is %d\n", &i);
//     ptr++;
//     printf("The value of ptr is %d", ptr);

//     return 0;
// }

// 2. Subtraction of a number to pointer.
// int main()
// {
//     float i=2.2;
//     float *ptr = &i;

//     printf("The address of i is %d\n", &i);
//     ptr--;
//     printf("The value of ptr is %d", ptr);

//     return 0;
// }

// 3. Subtraction of one pointer from another.
// int main()
// {
//     int i=32,j=21;
//     int *ptr1 = &i;
//     int *ptr2 = &j;

//     printf("The value of ptr1 is %d\n", ptr1);
//     printf("The value of ptr2 is %d\n", ptr2);
//     int subt = ptr2 - ptr1;
//     printf("The address of subt is %d", &subt);
    
//     return 0;
// }

// 4. Comparison of two pointer variables.
// int main()
// {
//     char c1='A',c2='B';
//     char *ptr1 = &c1;
//     char *ptr2 = &c2;

//     printf("The value of ptr1 is %d\n", ptr1);
//     // ptr2++;
//     // ptr2++;
//     printf("The value of ptr2 is %d\n", ptr2);

//     if (ptr1 > ptr2)
//     {
//         printf("ptr1 is greater than ptr2\n");
//     }
//     else if(ptr1==ptr2)
//     {
//         printf("Both have same size of address;\n");
//     }
//     else
//     {
//         printf("ptr2 is greater than ptr1");
//     }

//     return 0;
// }

/*
    Ques2.) Create a 2-D array by taking input from the user. Write a display function
    to print the content of this 2-D array on the screen.
*/

// int main()
// {
//     int arr[5][5];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("Enter the value: ");
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }