#include <stdio.h>

// void display();   // Function Prototype

// int main()
// {
//     printf("Hello World!!\n");
//     display(); // Function call
//     return 0;
// }

// void display()
// {
//     printf("Hey Program!!\n"); // Function definition
// }

// Example for calculating a sum using function

// int sum(int a, int b);

// int main()
// {
//     int c;
//     c = sum(2,3);
//     printf("%d", c);
// }

// int sum(int a, int b)
// {
//     int result;

//     result = a+b;
//     return result;
// }

/* Example of MISNOMER (A name or term applied to something incorrectly or 
inappropriately) in function */ 

// int change(int b) // Change is a function which changes value of a from main() to 1.
// {
//     b = 1;
//     return b;
// }

// int main()
// {
//     int a=2;
//     change(a); // But now if we will call the change function it won't change the value.
    
//     printf("%d", a); // Because a copy of 'variable a' will be passed to the 'variable b'
//     // or you can say to the change function so it will return the original value.
// }

// ********************* RECURSION ***********************
// Recursion is a method where a function call itself.
// void msg(); // We use void when we don't need to return any value. 

// Ques. Print a message using recursion till n ?
// int main()
// {
//     int num;

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     msg(num);
// }

// void msg(int num)
// {
//     if(num == 0) return;
//     else
//     printf("Good Morning Pineapple\n");
//     return msg(num-1);
// }

// Ques. Print n to 1 using recursion?
// int descending(int val);

// int main()
// {
//     int num;

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     descending(num);
// }

// int descending(int val)
// {
//     if (val==0) return 1;
//     else
//     printf("%d\n", val);
//     return descending(val-1);
// }

// Ques. Print Factorial of n using recursion?
// int factorial(int val);

// int main()
// {
//     int num, fact;

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     fact = factorial(num);
//     printf("Factorial of %d is %d", num, fact);
// }


// int factorial(int val)
// {
//     if (val==0||val==1) return 1;
//     else
//     return val*factorial(val-1);
// }

// ************ Using Parameter *************
// Ques. Print 1 to n using recursion?
// int ascending(int inc, int val); 

// int main()
// {
//     int num;

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     ascending(1,num);
// }


// int ascending(int inc, int val) 
// {
//     if(inc > val) return 1;
//     else
//     printf("%d\n", inc);
//     return ascending(inc+1, val);
// }

// ************** Using without Parameter ***************

// int ascending(int val); 


// int main()
// {
//     int num;

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     ascending(num);
// }


// int ascending(int val) 
// {
//     if(val==0) return 1;
//     else
//     ascending(val-1);
//     return printf("%d\n", val);
// }

// Ques. Print n to 1 after recursive call?
// int descending(int x, int n);

// int main()
// {
//     int num;
    
//     printf("Enter Input: ");
//     scanf("%d", &num);

//     descending(1,num);
// }

// int descending(int x, int n)
// {
//     if (x>n) return 1;
//     else
//     descending(x+1,n);
//     return printf("%d\n", x);
// }

// Ques. Print variation of number using recursion?
// int numVar(int n)
// {
//     if(n==0) return 1;
//     else
//     printf("%d\n", n);
//     numVar(n-1);
//     return printf("%d\n", n);
// }

// int main()
// {
//     int n;

//     printf("Enter Input: ");
//     scanf("%d", &n);

//     numVar(n);
//     return 0;
// }

// Ques. Print power of a number using recursion?

// int power(int b, int e);

// int main()
// {
//     int base, exp;

//     printf("Enter Input for Base: ");
//     scanf("%d", &base);
    
//     printf("Enter Input for Exponent: ");
//     scanf("%d", &exp);

//     printf("Power of %d raised to the power %d is %d", base, exp, power(base, exp));
// }

// int power(int b, int e)
// {
//     if(e==0) return 1;
//     return b*power(b,e-1);
// }

// Ques. Print fibonacci using recursion
// int fibo(int n);

// int main()
// {
//     int num;

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     printf("Fibonacci number: %d", fibo(num));
// }

// int fibo(int n)
// {
//     if(n==1 || n==2) return 1;
//     return fibo(n-1) + fibo(n-2);
// }

// ********************** STAIR CASE **************************
// Ques. Print the total number of ways to count the steps or stairs ?

// int stairWays(int n)
// {
//     if (n==1 || n==2 || n==3) return n;
//     return stairWays(n-1) + stairWays(n-2) + stairWays(n-2); 
// }

// int main()
// {
//     int num;

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     int ways = stairWays(num);
//     printf("Total number of Ways are: %d", ways);
// }

// *********************** MAZE PATH ********************
/* Ques. Print the total number of counts to make a person reach from it's initial point 
to the final destination using recursion? 
*/ 

// int mazePath1(int cr, int cc, int er, int ec)
// {
//     int dw=0;
//     int rw=0;
//     if(cr==er && cc==ec) return 1;
//     if (cr==er)
//     {
//         rw += mazePath1(cr, cc+1, er, ec);
//     }
//     if (cc==ec)
//     {
//         dw += mazePath1(cr+1, cc, er, ec);
//     }
    
//     if(cr<er && cc<ec)
//     {
//         dw += mazePath1(cr+1, cc, er, ec);
//         rw += mazePath1(cr, cc+1, er, ec);
//     }
//     int totalWays = dw + rw;
//     return totalWays;
// }

// int main()
// {
//     int rows, cols;

//     printf("Enter rows: ");
//     scanf("%d", &rows);
    
//     printf("Enter columns: ");
//     scanf("%d", &cols);

//     printf("Total ways are: %d", mazePath1(1,1,rows,cols));
// }

// *********************** MAZE PATH REVERSE ********************
/* Ques. Print the total number of counts to make a person reach from it's initial point 
to the final destination using recursion but this time rows and columns value will be 
reversed ? 
*/

// int mazePath2(int r, int c)
// {
//     int rw = 0;
//     int dw = 0;
//     if(r==1 && c==1) return 1;
//     if (r==1)
//     {
//         rw += mazePath2(r,c-1);
//     }
//     if (c==1)
//     {
//         dw += mazePath2(r-1,c);
//     }
    
//     if (r>1 && c>1)
//     {
//         dw += mazePath2(r-1,c);
//         rw += mazePath2(r,c-1);
//     }
//     int totalWays = rw + dw;
//     return totalWays;
// }

// int main()
// {
//     int rows, cols;
//     printf("Enter rows: ");
//     scanf("%d", &rows);
    
//     printf("Enter columns: ");
//     scanf("%d", &cols);

//     printf("Total ways are: %d", mazePath2(rows,cols));
// }

// Ques. Print pre in post and also illustrate euler tree and call stack with example?

// void preInPost(int n)
// {
//     if(n==0) return;
//     printf("%d ", n);
//     preInPost(n-1);
//     printf("%d ", n);
//     preInPost(n-1);
//     printf("%d ", n);
//     return;
// }

// int main()
// {
//     int num;

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     preInPost(num);
// }

// Ques. Solve tower of hanoi problem using recursion in c?

// void toh(int n, char s, char h, char d)
// {
//     if (n==1)
//     {
//         printf("%c -> %c\n",s,d);
//     }
//     else
//     {
//         toh(n-1,s,d,h);
//         toh(1,s,h,d);
//         toh(n-1,h,s,d);
//         return;
//     }
    
// }

// int main()
// {
//     int num; 
//     char src='A', hr='B', des='C';

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     toh(num,src,hr,des);
// }

// Another method:-

// void toh(int n, char s, char h, char d)
// {
//     if (n==0) return;
//     else
//     toh(n-1,s,d,h);
//     printf("%c -> %c\n",s,d);
//     toh(n-1,h,s,d);
//     return;

    
// }

// int main()
// {
//     int num; 

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     toh(num,'A','B','C');
// }