#include <stdio.h>

// Array is used to store limited values of the same data type. Which makes a variable reusable and we can use it again and again as per our needs. It's initial value is always 0.

// Example 1:- 

// int main()
// {
//     int marks[4]; // Here we have created an array variable to store 4 values.

//     marks[0]=54;  // <-- Array always starts from 0 which is it's first value.
//     marks[1]=56;
//     marks[2]=67;
//     marks[3]=76;
    
//     printf("The marks of students 1 is %d\n", marks[0]);
//     printf("The marks of students 2 is %d\n", marks[1]);
//     printf("The marks of students 3 is %d\n", marks[2]);
//     printf("The marks of students 4 is %d\n", marks[3]);

//     return 0;
// }

// Example 2:- 

// int main()
// {
//     int pos[3]={1,2,3}; // We can store array in a set also. So that we don't need to write a variable again and again.

//     printf("Position of student 1 is %d\n", pos[0]);
//     printf("Position of student 2 is %d\n", pos[1]);
//     printf("Position of student 3 is %d\n", pos[2]);
    
//     return 0;
// }

// Example 3:- 

// int main()
// {
//     int marks[]={89,56,68,55,75,63};  // This array is known as infinite array. We can store infinite values in the set.

//     printf("Marks of student 1 is %d\n", marks[0]);
//     printf("Marks of student 2 is %d\n", marks[1]);
//     printf("Marks of student 3 is %d\n", marks[2]);
//     printf("Marks of student 4 is %d\n", marks[3]);
//     printf("Marks of student 5 is %d\n", marks[4]);
//     printf("Marks of student 6 is %d\n", marks[5]);
    
//     return 0;
// }