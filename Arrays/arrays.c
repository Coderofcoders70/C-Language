#include <stdio.h>

// int main()
// {
//     int marks[4];

//     marks[0]=54;
//     marks[1]=56;
//     marks[2]=67;
//     marks[3]=76;
    
//     printf("The marks of students 1 is %d\n", marks[0]);
//     printf("The marks of students 2 is %d\n", marks[1]);
//     printf("The marks of students 3 is %d\n", marks[2]);
//     printf("The marks of students 4 is %d\n", marks[3]);

//     return 0;
// }

// int main()
// {
//     int marks[4];

//     for (int i = 0; i < 4; i++)
//     {
//         printf("Enter the marks of student %d: ", i+1);
//         scanf("%d", &marks[i]);
//     }

//     for (int i = 0; i < 4; i++)
//     {
//         printf("Marks of student %d is %d\n", i+1, marks[i]);
//     }
    
//     return 0;
// }

// int main()
// {
//     int pos[3]={1,2,3};

//     printf("Position of student 1 is %d\n", pos[0]);
//     printf("Position of student 2 is %d\n", pos[1]);
//     printf("Position of student 3 is %d\n", pos[2]);
    
//     return 0;
// }

// int main()
// {
//     int marks[]={89,56,68,55,75,63};

//     printf("Marks of student 1 is %d\n", marks[0]);
//     printf("Marks of student 2 is %d\n", marks[1]);
//     printf("Marks of student 3 is %d\n", marks[2]);
//     printf("Marks of student 4 is %d\n", marks[3]);
//     printf("Marks of student 5 is %d\n", marks[4]);
//     printf("Marks of student 6 is %d\n", marks[5]);
    
//     return 0;
// }

// int main()
// {
//     int marks[]={89,56,68,55,75,63};

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Marks of student %d is %d\n", i+1,marks[i]);
//     }
    
//     return 0;
// }

// **************** ARRAYS USING POINTER*****************

// int main()
// {
//     int i = 32;
//     int *ptr = &i;
    
//     printf("The address of i is %d\n", &i);
//     ptr++;
//     ptr--;
//     printf("The value of ptr is %d", ptr);

//     return 0;
// }

// Pointer To Integer
// int main()
// {
//     int i = 32;
//     int *ptr = &i;
    
//     printf("The address of i is %d\n", &i);
//     ptr++;
//     ptr--;
//     printf("The value of ptr is %d", ptr);

//     return 0;

// Pointer To char
// int main()
// {
//     float i = 32.5;
//     float *ptr = &i;
    
//     printf("The address of i is %u\n", &i);
//     ptr++;
//     printf("The value of ptr is %u", ptr);

//     return 0;
// }

// Pointer To Character
// int main()
// {
//     char i = 'A';
//     char *ptr = &i;
    
//     printf("The address of i is %u\n", &i);
//     ptr++;
//     printf("The value of ptr is %u", ptr);

//     return 0;
// }

// int main()
// {
//     int arr[] = {23,54,56,67,43,32};
//     int *ptr = arr;
    
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Age of person %d is %d\n", i+1, *ptr++);
//     }
    
//     return 0;
// }

// int main()
// {
//     int arr[] = {23,54,56,67,43,32};
//     int *ptr = &arr[0];
    
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Age of person %d is %d\n", i+1, *ptr++);
//     }
    
//     return 0;
// }

// int main()
// {
//     int arr[] = {23,54,56,67,43,32};
//     int *ptr = arr;
    
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Age of person %d is %d\n", i+1, ptr[i]);
//     }
    
//     return 0;
// }

// int main()
// {
//     int arr[] = {23,54,56,67,43,32};
//     int *ptr = arr;
    
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Age of person %d is %d\n", i+1, *(ptr+i));
//     }
    
//     return 0;
// }

// **************** ARRAYS POINTER WITH FUNCTION*****************

// void age(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("Age of person %d is %d\n", i+1, *ptr++);
//     }
    
// }

// int main()
// {   
//     int arr[]={16,52,65,35,45};
//     int num;

//     printf("Enter the count of people: ");
//     scanf("%d", &num);

//     age(arr,num);

//     return 0;
// }

// void age(int ptr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("Age of person %d is %d\n", i+1, ptr[i]);
//     }
    
// }

// int main()
// {   
//     int arr[]={16,52,65,35,45};
//     int num;

//     printf("Enter the count of people: ");
//     scanf("%d", &num);

//     age(arr,num);

//     return 0;
// }

// ****************** 2-D ARRAYS OR TWO-DIMENSIONAL ARRAY***********
// int main()
// {
//     int n1, n2;
//     int arr[5][5];
//     printf("Enter number of rows: ");
//     scanf("%d", &n1);
//     printf("Enter number of columns: ");
//     scanf("%d", &n2);

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             printf("Enter Product sr no: ");
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             printf("Category %d has sub-category %d and its Product sr no is %d\n", i+1, j+1, arr[i][j]);
//         }
//     }
    
//     return 0;
// }

