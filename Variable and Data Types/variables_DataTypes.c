#include "demoExternVar.h"
#include <stdio.h>
#include <math.h>

// int main()
// {
//     int a = 10;
//     int b = 20;
//     float c = 7.5;
//     char d = 'e';
//     char f = '21 Dec 2020'; // It will generate error as you are passing a complete string in the character data type.


//     printf("Addition: %d\n", a + b);
//     printf("Subtraction: %d\n", a - b);
//     printf("Multiplication: %d\n", a * b);
//     printf("Division: %.2f\n", (double)a / (double)b);
//     printf("Modulus: %d\n", a % b);
//     // printf("Year: %c\n", f); wrong method!!
//     printf("XOR value will be %d\n", 3 ^ 2);
//     printf("XOR value will be %d\n", 3 ^ 3);
//     printf("4 to the power 5 is %.1lf", pow(4,5));
// }

// ******************************** AUTOMATIC VARIABLE ************************************
/*  
    In C programming, an automatic variable refers to a local variable that is automatically created when its containing function or block is entered, and automatically destroyed when that function or block is exited.
*/

// int add()
// {
//     auto int x = 10;
//     int y = 20;

//     return x + y;

// }

// void main()
// {
//     int res = add();
//     printf("Result: %d\n", res);
// }

// ******************************** EXTERNAL VARIABLE ************************************
// void main()
// {
//     int add;

//     add = x + y;
//     printf("Result: %d", add);
// }