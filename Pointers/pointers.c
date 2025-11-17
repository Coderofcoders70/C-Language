#include <stdio.h>

// int main()
// {
//     int a = 3;
//     int *b = &a;

//     printf("The value of a is %d\n", a);
//     printf("The value of *b is %d\n", *b);
//     printf("The address of a is %d\n", &a);
//     printf("The address of *b is %d\n", b);
//     printf("The address of address of *b is %d\n", &b);
//     return 0;
// }

//************ CALL BY VALUE ***************
// void swap(int a, int b); 

// int main()
// {
//     int a = 3;
//     int b = 4;

//     printf("Before Swap: a=%d and b=%d\n", a,b);
//     swap(a,b);
//     printf("After Swap: a=%d and b=%d\n", a,b);
    
//     return 0;
// }

// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// Another method:-
// void swap(int a, int b); 

// int main()
// {
//     int a = 3;
//     int b = 4;

//     swap(a,b);
//     printf("Before Swap: a=%d and b=%d\n", a,b);
    
//     return 0;
// }

// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("After Swap: a=%d and b=%d\n", a,b);
// }

//************ CALL BY REFRENCE **************
// void swap(int *a, int *b); 

// int main()
// {
//     int a = 3;
//     int b = 4;

//     printf("Before Swap: a=%d and b=%d\n", a,b);
//     swap(&a, &b);
//     printf("After Swap: a=%d and b=%d\n", a,b);

//     return 0;
// }

// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// Another mehtod:-
// void swap(int *a, int *b); 

// int main()
// {
//     int a = 3;
//     int b = 4;

//     swap(&a,&b);
//     printf("Before Swap: a=%d and b=%d\n", a,b);
    
//     return 0;
// }

// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("After Swap: a=%d and b=%d\n", *a,*b);
// }

//************** DOUBLE POINTER *************** 
// int main()
// {
//     int a = 2;
//     int *b = &a;
//     int **c = &b;

//     printf("The value of a is %d\n", a);
//     printf("The value of b is %d\n", *b);
//     printf("The value of c is %d\n", **c);
//     return 0;
// }