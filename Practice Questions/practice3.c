#include <stdio.h>

int main()
{
    // Practice set 3:-
    // Q1. what will be the output of this program?
    // The output will be "I am 11" as assign operator has been used instead of equality check operator.
    // int a = 10;

    // if(a = 11)
    // {
    //     printf("I am 11"); 
    // }
    // else
    // {
    //     printf("I am not 11");
    // }

    /* Q2. Write a program to find out whether a student is pass or fail. If it requires
       total 40% and at least 33% in each subject to pass. Assume 3 subjects and take 
       marks as an input from the user?
    */
    // My method  
    // int eng, mat, sci, marks_Obt, tot_Marks = 300;
    // float perc;
    
    // printf("Enter the marks of English: ");
    // scanf("%d", &eng);
    // printf("Enter the marks of Maths: ");
    // scanf("%d", &mat);
    // printf("Enter the marks of Science: ");
    // scanf("%d", &sci);
    
    // printf("Your marks: %d, %d, %d", eng, mat, sci);
    // printf("\n");
    // marks_Obt = eng + mat + sci;
    // printf("Marks Obtained: %d", marks_Obt);
    // printf("\n");
    // perc = (float)marks_Obt / (float)tot_Marks * 100;

    // if(perc >= 80)
    // {
    //    printf("Outstanding Performance");
    // }
    // else if(perc >= 50)
    // {
    //     printf("Well done");
    // }
    // else if(perc <= 50 && perc >= 33)
    // {
    //     printf("You are just pass and work hard");
    // }
    // else
    // {
    //     printf("Sorry you failed");
    // }
    // printf("\nYour Percentage is: %.2f%%", (double)perc);

    // Harry's solution
    // int eng, mat, sci;
    // float total;
    
    // printf("Enter the marks of English: ");
    // scanf("%d", &eng);
    // printf("Enter the marks of Maths: ");
    // scanf("%d", &mat);
    // printf("Enter the marks of Science: ");
    // scanf("%d", &sci);

    // printf("Marks obtained in English: %d, Maths: %d, and Science: %d", eng, mat, sci);
    // printf("\n");
    // total = ((eng + mat + sci) / 3);
    
    // if(total <= 40 || eng <= 33 || mat <= 33 || sci <= 33)
    // {
    //     printf("You are fail in any subject or subjects with %.1f percentage\n", total);
    // }
    // else
    // {
    //     printf("You are pass with %.1f percentage", total);
    // }

    //Q3. Calculate income tax paid by an employee to the government as per the slabs mentioned below:-
    //   Income slabs        tax
    //   2.5L - 5.0L         5%
    //   5.0L - 10.0L        20%
    //   Above 10.0L         30%

    // float tax = 0, income;

    // printf("Enter the income: ");
    // scanf("%f", &income);

    // if(income >= 250000 && income <= 500000)
    // {
    //     tax = tax + 0.05 * (income - 250000);
    // }
    
    // if(income >= 500000 && income <= 1000000)
    // {
    //     tax = tax + 0.20 * (income - 500000);
    // }
    
    // if(income >= 1000000)
    // {
    //     tax = tax + 0.30 * (income - 1000000);
    // }
    // printf("Your income is : %.1f so tax you need to pay is %.1f", income, tax);

    /* Q4. Write a program to find whether a year entered by the user is a leap year or
    not. Take year as an input from the user? */
    // long ly; 

    // printf("Enter year: ");
    // scanf("%ld", &ly);

    // if(ly % 4 == 0)
    // {
    //     printf("It is a leap year");
    // }
    // else
    // {
    //     printf("It is not a leap year");
    // }

    //Q5. Write a program to determine whether a character entered by the user is lowercase or not?
    // char ch;

    // printf("Enter the character: ");
    // scanf("%c", &ch);

    // if(ch >= 97 && ch <= 122)
    // {
    //     printf("Character is lowercase");
    // }
    // else
    // {
    //     printf("Character is not in lowercase");
    // }

    // Q6. Write a program to find greatest of four numbers entered by the user?
    // int a,b,c,d;
    
    // printf("Enter the value of a: ");
    // scanf("%d", &a);
    // printf("Enter the value of b: ");
    // scanf("%d", &b);
    // printf("Enter the value of c: ");
    // scanf("%d", &c);
    // printf("Enter the value of d: ");
    // scanf("%d", &d);

    // if(a > b)
    // {
    //     if(a > c)
    //     {
    //         printf("a: %d", a);
    //     }
    //     else
    //     {
    //         printf("c: %d", c);
    //     }
    // }
    // else if (b > c)
    // {
    //     printf("b: %d", b);
    // }
    // else if (c > d)
    // {
    //     printf("c: %d", c);
    // }
    // else
    // {
    //     printf("d: %d", d);
    // }
    // return 0;
}