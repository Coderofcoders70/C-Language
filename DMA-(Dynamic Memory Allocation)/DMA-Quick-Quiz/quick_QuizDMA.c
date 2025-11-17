#include <stdio.h>
#include <stdlib.h>

// Ques1. W.a.p to create a dynamic array of 5 floats using malloc()?
// int main()
// {
//     float *ptr;

//     ptr = (float *) malloc(5 * sizeof(float));

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the %d value: ", i+1);
//         scanf("%f", &ptr[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         printf("Value of %d is %.1f\n", i+1, ptr[i]);
//     }
    
//     return 0;
// }

// /*
//     Ques2. W.a.p to create an array of size n using calloc() where n is an integer entered 
//     by the user?
// */
// int main()
// {
//     int *ptr;
//     int n;

//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     ptr = (int *) calloc(n, sizeof(int));

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the %d value: ", i+1);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("Value entered for %d ptr is %d\n", i+1, ptr[i]);
//     }
    
//     return 0;
// }

/*
    Ques3. W.a.p to create an array of size n using malloc() where n is an integer entered 
    by the user?
*/
// int main()
// {
//     int *ptr;
//     int n;

//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     ptr = (int *) malloc(n * sizeof(int));

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the %d value: ", i+1);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("Value entered for %d ptr is %d\n", i+1, ptr[i]);
//     }
    
//     return 0;
// }

/*
    Ques4. W.a.p to demonstrate the usage of free() with malloc()?
*/
// int main()
// {
//     int *ptr;
//     int n;

//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     ptr = (int *) malloc(n * sizeof(int));

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the %d value: ", i+1);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("Value entered for %d ptr is %d\n", i+1, ptr[i]);
//     }
//     free(ptr);
    
//     return 0;
// }
// Another method:-
int main()
{
    int *ptr1;
    int *ptr2;
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);
    // ptr1 = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr2 = (int *) malloc(n * sizeof(int));
        printf("Enter the %d value: ", i+1);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Value entered for %d ptr is %d\n", i+1, ptr[i]);
    }
    // free(ptr1);
    
    return 0;
}