#include <stdio.h>

  // ******************** FUNCTIONS AND RECURSION **********************
  //Ques1. W.a.p using functions to find the average of three numbers?   

// int average(int n)
// {
//     int sum=0, val, aveg;
//     printf("Enter any %d values: \n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &val);
//         sum += val;
//     }
//     aveg = sum/n;
//     return aveg;
// }

// int main()
// {
//     int num;

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     int avg = average(num);
//     printf("Average: %d", avg);
//     return 0;
// }

// Ques2. Write a function to convert celsius temperature into fahrenheit?

// double temperature(double n)
// {
//   double fah;

//   fah = (n*9/5) + 32;
//   return fah;
// }

// int main()
// {
//   double num;

//   printf("Enter Input: ");
//   scanf("%lf", &num);

//   double temp = temperature(num);
//   if ((int)temp == temp)
//   {
//     printf("Temperature in Fahrenheit: %d", temp);
//   }
//   else
//   {
//     printf("Temperature in Fahrenheit: %.1lf", temp);
//   }
  
//   return 0;
// }

/* Ques3. Write a function to calculate force of attraction on a body of mass m exerted
by earth? (g=9.8m/s2); */

// double foa(double ms1, double ms2, double dis)
// {
//   float g=9.8;
//   double f;

//   f = ((g*(ms1*ms2))/(dis*dis));
//   return f;
// }

// int main()
// {
//   double m1, m2, d, res;

//   printf("Enter value of mass1: ");
//   scanf("%lf", &m1);
//   printf("Enter value of mass2: ");
//   scanf("%lf", &m2);
//   printf("Enter value of distance: ");
//   scanf("%lf", &d);

//   res = foa(m1,m2,d);
//   printf("Gravitational Force: %.1lf", res);
//   return 0;
// }

// Ques4. W.a.p using recursion to calculate nth element of a fibonacci series

// int fib(int n)
// {
//   int res;
//   if(n==1 || n==2) return 1;
//   else
//   res = fib(n-1) + fib(n-2);
//   return res;
// }

// int main()
// {
//   int num;
  
//   printf("Enter Input: ");
//   scanf("%d", &num);

//   int fibo = fib(num);
//   printf("Value of %dth element is %d", num,fibo);
//   return 0;
// }

// Ques5. What will the following line produce in a c program?

// int main()
// {
//   int a;

//   printf("Enter Input: ");
//   scanf("%d", &a);

//   printf("%d %d %d\n", a, ++a, a++);
//   return 0;
// }

// Ques6. Write a recursive function to calculate the sum of first n natural numbers?

// int sum(int n, int s)
// {
//   if(n==0)
//   {
//     return s;
//   }
//   else
//   return sum(n-1,s+n); 
// }

// int main()
// {
//   int num;
  
//   printf("Enter Input: ");
//   scanf("%d", &num);

//   int res = sum(num, 0);
//   printf("Sum of the value %d is %d", num,res);
//   return 0;
// }

/* Ques7. W.a.p using functions to print the following pattern:-

   *
   * * *
   * * * * *
*/

// void triangle(int n)
// {
//   for (int i = 1; i <= n; i++)
//   {
//     int nst=2*i-1;
//     for (int j=1; j<=nst; j++)
//     {
//       printf("* ");
//     }
//     printf("\n");  
//   }
// }

// int main()
// {
//   int num;
  
//   printf("Enter Input: ");
//   scanf("%d", &num);

//   triangle(num);
//   return 0;
// }

// Another method:-
// void triangle(int n)
// {
//   if(n > 1)
//   triangle(n-1);
//   for (int i = 1; i <= 2*n-1; i++)
//   {
//     printf("*");
//   }
//   printf("\n");
// }

// int main()
// {
//   int num;

//   printf("Enter range: ");
//   scanf("%d", &num);

//   triangle(num);
//   return 0;
// }