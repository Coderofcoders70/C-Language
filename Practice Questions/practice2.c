#include <stdio.h>

int main()
{
    // Practice set 2
    // Q1. Which of the following is invalid in c:-
    // 1. int a; b = a;
    // 2. int v = 3 ^ 3;   
    // 3. char dt = '21 Dec 2020';
    
    // 1. int a;
    // printf("%d", b = a); It is invalid
    
    // 2. int v = 3 ^ 3;
    // printf("%d", v);  It is valid

    // 3. char dt = '21 Dec 2020';
    //printf("%c", dt); It is invalid
    // return 0;

    // Q2. What data type will 3.0/8 - 2 return?
    // It will return float but more accurate will be double type.
    // printf("The return value type will be %f", 3.0/8 - 2);

    // Q3. Write a program to check whether a number is divisible by 97 or not?
    // Simple method without loop
    // int num;
    // printf("Enter the number: ");
    // scanf("%d", &num);
    // printf("Divisibility test returns: %d", num%97);
    
    // Method using loop
    // int i, num;
    // printf("Enter the number till you want: ");
    // scanf("%d", &num);

    // for(i = 0; i < num; i++)
    // {
    //     if(i % 97 == 0)
    //     {
    //         printf("Number divisible by 97 is: %d\n", i);
    //     }
    // }

    // Q4. Explain step by step evaluation of 3 * x / y - z + k 
    // where x = 2, y = 3, z = 3, k = 1?
    // int x = 2, y = 3, z = 3, k = 1;
    // Rule to understand evaluation :-
    // 1. 1st priority -> *, /, % 
    // 2. 2nd priority -> +,- 
    // 3. 3rd priority -> =  
    // step by step evaluation
    // => (3 * x) / y - z + k;
    // => ((3 * x) / y) - z + k;
    // => (((3 * x) / y) - z) + k;
    // => ((((3 * x) / y) - z) + k);
    // printf("%d", ((((3 * x) / y) - z) + k));

    // Q5. 3.0 + 1 will be:
    // 1. Integer
    // 2. Floating number
    // 3. Character
    // printf("Value will be %f", 3.0 + 1);
    //Ans is Floating number.
}