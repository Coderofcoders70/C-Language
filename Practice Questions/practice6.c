#include <stdio.h>

// **************** POINTERS *****************

// int main()
// {
//     /* Ques1. W.A.P to print the address of a variable. Use this address to get the 
//     value of the variable. */
    
//     int i=2;

//     printf("Address of variable i is %d\n", &i);
//     printf("Value of variable i is %d", *(&i));
//     return 0;
// }

/* Ques2. W.A.P having a variable i. Print the address of i. Pass this variable to a 
function and print its address. Are these addresses same? Why? */

/* If we try to print the addresses of both the variables separately then they will  
generate different addresses. One for the user defined function and another for the 
main(). But if we simply print the passed address of the variable to our defined function 
then the addresses will be the same. 
*/

// void Address(int *a)
// {
//     printf("Address of variable in function is %d\n", a);
//     // or 
//     // printf("Address of variable in function is %p\n", (void* ) a); // It will print
//     // the value of pointer a in hexadecimal value. 
// }

// int main()
// {

//     int i;

//     printf("Address of variable i is %d\n", &i);

//     Address(&i);

//     return 0;
// }

/* Ques3. W.A.P to change the value of a variable to ten times of its current value. 
Write a function and pass the value by reference. */

// void change(int *a)
// {
//     *a = *a * 10;
// }

// int main()
// {
//     int i = 2;
    
//     printf("Original Value: %d\n", i);
//     change(&i);
//     printf("Changed value: %d\n", i);

//     return 0;
// }

/* Ques4. W.A.P using a function which calculates the sum and average of two numbers. Use
pointers and print the value of sum and average in main(). */

// int sa(int *a, int *b)
// {
//     int sum = *a + *b;
//     float avg = (float)sum/2;
//     return printf("Sum: %d\nAverage: %.1f", sum,avg);
// }

// int main()
// {

//     int a=2, b=3;

//     int ans = sa(&a, &b);
//     printf("%d", ans);
    
//     return 0;
// }

// Another method:-
// void sa(int *a, int *b, int *sum, float *avg)
// {
//     *sum = *a + *b;
//     *avg = (float)*sum/2;
// }

// int main()
// {

//     int a=2, b=3, sum;
//     float avg;

//     sa(&a, &b, &sum, &avg);

//     printf("Sum: %d\n", sum);
//     printf("Average: %.1f", avg);
    
//     return 0;
// }

/* Ques5. W.A.P to print the value of a variable i by using "Pointer to Pointer" type of 
variable. */

// int main()
// {

//     int i=2;
//     int *j = &i;
//     int **k = &j;

//     printf("Value of i is %d", **k);
    
//     return 0;
// }

/* Ques6. Try problem 3 using call by value and verify that it doesn't change the value 
of the said variable. */

// void change(int a)
// {
//     a = a * 10;
// }

// int main()
// {
//     int i = 2;
    
//     printf("Original Value: %d\n", i);
//     change(i);
//     printf("Changed value: %d\n", i);

//     return 0;
// }