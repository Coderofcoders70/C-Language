#include <stdio.h>

    //   ************PRACTICE SET - 4***************
int main()
{
    // Ques 1. Write a program to print multiplication table of a given number n?
    // int n;

    // printf("Enter number: ");
    // scanf("%d", &n);

    // for(int i = 1; i <= 10; i++)
    // {
    //     printf("%d\n", n * i);
    // }

    // Ques 2. Write a program to print multiplication table of 10 in reversed order ?
    // int n = 10;

    // for (int i = 10; i > 0; i--)
    // {
    //     printf("%d\n", n * i);
    // }

    // Ques 3. A do-while loop is executed
    //    1. at least once.
    //    2. at least twice.
    //    3. at most once.

    // Ans. A do while loop is executed at least once.

    // Ques 4. What can be done using one type of loop can also be done using the other
    // two types of loops - True or False ?

    // Ans. True

    // Ques 5. Write a program to sum first 10 natural numbers using while loop ?

    // int i = 0, sum = 0;
    
    // while (i <= 10)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    // printf("Sum of 10 natural numbers: %d", sum);

    // Ques 6. Write a program to implement program 5 using for and do while loop ?

    // **************WITH FOR LOOP****************
    
    // int sum = 0;

    // for(int i = 0; i <= 10; i++)
    // {
    //     sum = sum + i;
    // }
    // printf("sum of 10 natural numbers: %d", sum);

    // **************WITH DO WHILE LOOP****************

    // int i = 1, sum = 0;

    // do
    // {
    //     sum = sum + i;
    //     i++;
    // } while (i <= 10 );
    // printf("sum of 10 natural numbers: %d", sum);

    // Ques 7. Write a program to calculate the sum of the numbers occuring in the 
    // multiplication table of 8. (Consider 8 X 1 = 8 ..... 8 X 10 = 80).
    
    // int n = 8, val, sum = 0;

    // for (int i = 1; i <= 10; i++)
    // {
    //     val = n * i;
    //     printf("%d X %d = %d\n", n,i,val);
    //     sum = sum + val;
    // }
    // printf("Total sum: %d", sum);

    // Ques 8. Write a program to calculate the factorial of a given number using a for 
    // loop?

    // int fact = 0, n;

    // printf("Enter number: ");
    // scanf("%d", &fact);

    // n = fact;
    // for (int i = fact - 1; i > 0; i--)
    // {
    //     fact = fact * i;
    // }
    // printf("Factorial of %d is %d", n, fact);

    // Ques 9. Repeat 8 using while loop?

    // int fact = 0, i;

    // printf("Enter number: ");
    // scanf("%d", &fact);

    // i = fact - 1; 
    // while (i > 0)
    // {
    //     fact = fact * i;
    //     i--;
    // }
    // printf("Factorial number: %d", fact);

    // Ques 10. Write a program to check whether a given number is prime or not using loops ?

    // ********************This is wrong method*************************
    // int n;

    // printf("Enter number: ");
    // scanf("%d", &n);

    // for(int i = 0 + 1; i < 2; ++i)
    // {
    //     if (n % 2 == 0)
    //     {
    //         printf("Prime number: %d", n);
    //     }
    //     else
    //     {
    //         printf("Odd number: %d", n);
    //     }
    // }

    //*******************Correct Method*****************************

    // int n, prime = 1;

    // printf("Enter number: ");
    // scanf("%d", &n);

    // for(int i = 2; i < n; i++)
    // {
    //     if(n % i == 0)
    //     {
    //         prime = 0;
    //         break;
    //     }
    // }
    // if(prime == 0)
    // {
    //     printf("It is not a prime number or it is a composite number");
    // }
    // else
    // {
    //     printf("It is a prime number");
    // }
    
    // *****************Another method without flag********************
    // int n, i; 

    // printf("Enter the number: ");
    // scanf("%d", &n);

    // for (i = 2; i < n; i++)
    // {
    //     if(n % i == 0)
    //     {
    //         break;
    //     }
    // }
    // if(i * i > n)
    // {
    //     printf("%d is a prime number", n);
    // }
    // else
    // {
    //     printf("%d is not a prime number", n);
    // }
    
    //************************Another method using Sieve of Eratosthenes***********************
    //***************USING FLAG********************
    // int n1, n2; // This method will be used to print the prime numbers between a given range

    // printf("Enter first number: ");
    // scanf("%d", &n1);
    // printf("Enter second number: ");
    // scanf("%d", &n2);
    
    // printf("Prime numbers between %d to %d are:\n\n", n1,n2);
    // for (int i = n1; i < n2; i++)
    // {
    //     int isPrime = 1;
    //     if(i <=1)
    //     {
    //         continue;
    //     }
    //     for (int j = 2; j * j <= i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             isPrime = 0;
    //             break;
    //         }
            
    //     }
    //     if (isPrime)
    //     {
    //         printf("%d ", i);
    //     }
        
    // }

    // ************************WITHOUT FLAG************************
    // int n1, n2;
    // int j;

    // printf("Enter first number: ");
    // scanf("%d", &n1);
    // printf("Enter second number: ");
    // scanf("%d", &n2);
    
    // printf("Prime numbers between %d to %d are:\n\n", n1,n2);
    // for (int i = n1; i < n2; i++)
    // {
    //     if(i <=1)
    //     {
    //         continue;
    //     }
    //     for (j = 2; j * j <= i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             break;
    //         }
            
    //     }
    //     if (j * j > i)
    //     {
    //         printf("%d ", i);
    //     }
        
    // }
    
    // Ques 11. Implement 10 using other types of loops?
    // ********* IMPLEMENTING WITH WHILE LOOP *************
    // int n, i = 2, prime = 1;

    // printf("Enter number: ");
    // scanf("%d", &n);

    // while (i < n)
    // {
    //     if(n % i == 0)
    //     {
    //         prime = 0;
    //         break;    
    //     }
    //     i++;
    // }
    // if(prime == 0)
    // {
    //     printf("It is not a prime number");
    // }
    // else
    // {
    //     printf("It is a prime number");
    // }
   
   // ********* IMPLEMENTING WITH DO WHILE LOOP *************
    // int n, i = 2;
    // int isPrime = 1;

    // printf("Enter number: ");
    // scanf("%d", &n);
            
    // do
    // {
    //     if (n % i == 0 && !(n == 2))
    //     {
    //         isPrime = 0;
    //         break;
    //     }
    //     i++;
    // } while (i < n);

    // if (isPrime)
    // {
    //     printf("It is a prime number\n");
    // }
    // else
    // {
    //     printf("It is not a prime number\n");
    // }
    
}