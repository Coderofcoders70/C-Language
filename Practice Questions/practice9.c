#include <stdio.h>
#include <string.h>

// ************************** PRACTICE SET - 9 ************************
// ***************************** STRUCTURES ***************************

// Ques1. Create a two dimensional vector using structures in c?
// struct vector
// {
//     int vec[2][2];
// };


// int main()
// {
//     struct vector v1 = {1,2,3,4};

//     printf("Display a 2D Vector:\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", v1.vec[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

/*
    Ques2. Write a function sumVector which returns the sum of two vectors passed to it.
    The vector must be two dimensional. 
*/
// struct vectors
// {
//     int vec1[2][2], vec2[2][2];
// };

// void sumVector(struct vectors v1, struct vectors v2)
// {
//     int sum[2][2];
//     printf("Displaying Vector1:\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", v1.vec1[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Displaying Vector2:\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", v2.vec2[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             sum[i][j] = v1.vec1[i][j] + v2.vec2[i][j];
//         }
//         printf("\n");
//     }

//     printf("Displaying Sum of both the vectors:\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }

// }

// int main()
// {
//     struct vectors v1 = {{{1,2},{3,4}},{{0,0},{0,0}}};
//     struct vectors v2 = {{{0,0},{0,0}},{{2,3},{4,5}}};

//     sumVector(v1,v2);
    
//     return 0;
// }

// Ques3. Twenty integers are stored in memory. What will you prefer- Array or structures? 
/*
   Ans3. IF we want to store twenty integers then we must prefer Arrays. Arrays
   because it is clearly mentioned that we need to store 20 integers at the same time which
   are similar types of data. So Array will help us to store 20 integers at the same time. 
*/ 

// Ques4. W.a.p to illustrate the use of arrow operator (->) in c?
// struct school
// {
//     int srNo;
//     int clas;
//     char name[20];
// };

// int main()
// {
//     struct school s1;
//     struct school *ptr = &s1;
//     ptr -> srNo = 101;
//     strcpy(ptr -> name, "Lakshaya Sharma");
//     ptr -> clas = 5;
    
//     printf("Sr No: %d\n", ptr->srNo);
//     printf("Name: %s\n", ptr->name);
//     printf("Class: %d\n", ptr->clas);
//     return 0;
// }

// Ques5. W.a.p with a structure representing a complex number?
// struct complex
// {
//     float real;
//     float imag;
// };

// int main()
// {
//     struct complex s1;

//     printf("Enter a real number: ");
//     scanf("%f", &s1.real);    
//     printf("Enter an imaginary number: ");
//     scanf("%f", &s1.imag);
    
//     if (s1.imag >= 0)
//     {
//         printf("%.1f + %.1fi", s1.real,s1.imag);
//     }
//     else
//     {
//         printf("%.1f - %.1fi", s1.real,-s1.imag);
//     }
    
//     return 0;
// }

/*
    Ques6. Create an array of 5 complex numbers created in problem 5 and then display with
    the help of a display function. The values must be taken as an input from the user.
*/
// struct complex
// {
//     float real[5];
//     float imag[5];
// };

// void display(struct complex c1)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         if (c1.imag[i] >= 0)
//         {
//             printf("%.1f + %.1fi\n", c1.real[i],c1.imag[i]);
//         }
//         else
//         {
//             printf("%.1f - %.1fi\n", c1.real[i],c1.imag[i]);
//         }
//     }
    
// }

// int main()
// {
//     struct complex s1;

//     printf("Enter 5 real values:\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%f", &s1.real[i]);    
//     }
    
//     printf("Enter 5 imaginary values:\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%f", &s1.imag[i]);
//     }
    
//     display(s1);

//     return 0;
// }

// Ques7. Write problem 5's structure using typedef keyword?
// typedef struct complex
// {
//     float real;
//     float imag;
// }cmplx;

// int main()
// {
//     cmplx s1;

//     printf("Enter 5 real values:\n");
//     scanf("%f", &s1.real);    
    
//     printf("Enter 5 imaginary values:\n");
//     scanf("%f", &s1.imag);
    
//     if(s1.imag >= 0)
//     {
//         printf("%.1f + %.1fi\n", s1.real,s1.imag);
//     }
//     else
//     {
//         printf("%.1f - %.1fi\n", s1.real,s1.imag);
//     }
    
//     return 0;
// }

/*
    Ques8. Create a structure representing a bank account of a customer. What fields did you 
    use and why?
*/
// typedef struct bankAccount
// {
//     long accNum;
//     char holderNam[20];
//     long bal;
//     long wd;
//     long dp;
// }bacc;

// typedef struct accType
// {
//     char type;
//     long sav;
//     long fd;
// }act;


// int main()
// {
//     bacc b1; 
//     act t1;
//     t1.sav = 50000;
//     t1.fd = 1000000;
//     b1.bal = t1.sav;
    
//     printf("\n***WELCOME TO THE ABC BANKING SYSTEM***\n");
//     printf("      MADE BY LAKSHAYA SHARMA\n\n");
//     printf("Enter your account number: ");
//     scanf("%ld", &b1.accNum);

//     printf("Enter your Holder Name: ");
//     scanf(" %[^\n]s", b1.holderNam);

//     printf("\nDo you want to check your Account ?\n");
//     printf("Press Y --> Yes\n");
//     printf("Press N --> Exit\n");
//     printf("Press Here: ");
//     scanf(" %c", &t1.type);
//     if (t1.type == 'y' || t1.type == 'Y')
//     {
//         printf("\nDo you want to check your savings or fixed deposits ?\n");
//         printf("Press S --> To Check your Savings\n");
//         printf("Press F --> To Check your Fixed Deposits\n");
//         printf("Press Here: ");
//         scanf(" %c", &t1.type);
//         if (t1.type == 's' || t1.type == 'S')
//         {
//             printf("\nYour Current Savings: %ld\n", t1.sav);
//             printf("Do you want to Withdraw or deposit money?\n");
//             printf("Press W --> To Withdraw cash\n");
//             printf("Press D --> To Deposit cash\n");
//             printf("Press Here: ");
//             scanf(" %c", &t1.type);
//             if (t1.type == 'w' || t1.type == 'W')
//             {
//                 printf("Balance: %ld\n", b1.bal);
//                 printf("Enter the amount you want to withdraw: ");
//                 scanf("%ld", &b1.wd);

//                 b1.bal = b1.bal - b1.wd;
//                 printf("Total Amount left: %ld\n", b1.bal);
//                 printf("Account Number: %ld\n", b1.accNum);
//                 printf("Holder Name: %s\n", b1.holderNam);
//             }
//             else if (t1.type == 'd' || t1.type == 'D')
//             {
//                 printf("Balance: %ld\n", b1.bal);
//                 printf("Enter the amount you want to deposit: ");
//                 scanf("%ld", &b1.dp);

//                 b1.bal = b1.bal + b1.dp;
//                 printf("Total Amount: %ld\n", b1.bal);
//                 printf("Account Number: %ld\n", b1.accNum);
//                 printf("Holder Name: %s\n", b1.holderNam);
//             }
//             else
//             {
//                 printf("Thanks please visit again!!");
//             }
//         }
//         else if (t1.type == 'f' || t1.type == 'F')
//         {
//             printf("Your Fixed Desposits: %ld\n", t1.fd);
//             printf("Account Number: %ld\n", b1.accNum);
//             printf("Holder Name: %s\n", b1.holderNam);
//         }
//         else
//         {
//             printf("There is some mistake. Please Try again !!\n");
//         }
//     }
//     else
//     {
//         printf("Thanks please visit again!!");
//     }
    
//     return 0;
// }

/*
    Ques9. Write a structure capable of storing dates. Write a function to compare those 
    dates.
*/ 
// struct dates
// {
//     int dt;
//     int mt;
//     int year;
// };

// int cmpDates(struct dates d1, struct dates d2)
// {
//     if (d1.year > d2.year)
//     return 1;
//     else if (d1.year < d2.year)
//     return -1;
//     else
//     {
//         if (d1.mt > d2.mt)
//         return 1;
//         else if(d1.mt < d2.mt)
//         return -1;
//         else
//         {
//             if (d1.dt > d2.dt)
//             return 1;
//             else if(d1.dt < d2.dt)
//             return -1;
//             else
//             return 0;
//         }        
//     }
// }

// int main()
// {
//     struct dates d1, d2;
//     printf("Enter first date:\n");
//     scanf("%d %d %d", &d1.dt, &d1.mt, &d1.year);
    
//     printf("Enter Second date:\n");
//     scanf("%d %d %d", &d2.dt, &d2.mt, &d2.year);

//     int ans = cmpDates(d1, d2);

//     if (ans == 0)
//     {
//         printf("Both the dates are same");
//     }
//     else if (ans == 1)
//     {
//         printf("First date is greater than second date");
//     }
//     else
//     {
//         printf("Second date is greater than first date");
//     }

//     return 0;
// }

/*
    Ques10. Solve problem 9 for time using typedef keyword.
*/
// typedef struct times
// {
//     int hr;
//     int min;
//     int sec;
// }tms;

// int cmpTimes(tms t1, tms t2)
// {
//     if (t1.hr > t2.hr)
//     return 1;
//     else if (t1.hr < t2.hr)
//     return -1;
//     else
//     {
//         if (t1.min > t2.min)
//         return 1;
//         else if(t1.min < t2.min)
//         return -1;
//         else
//         {
//             if (t1.sec > t2.sec)
//             return 1;
//             else if(t1.sec < t2.sec)
//             return -1;
//             else
//             return 0;
//         }        
//     }
// }

// int main()
// {
//     tms t1, t2;
//     printf("Enter first date:\n");
//     scanf("%d %d %d", &t1.hr, &t1.min, &t1.sec);
    
//     printf("Enter Second date:\n");
//     scanf("%d %d %d", &t2.hr, &t2.min, &t2.sec);

//     int ans = cmpTimes(t1, t2);

//     if (ans == 0)
//     {
//         printf("Both the times are same");
//     }
//     else if (ans == 1)
//     {
//         printf("First time is greater than second time");
//     }
//     else
//     {
//         printf("Second time is greater than first time");
//     }

//     return 0;
// }

/*
    Ques11. W.a.p using structures to store values of timestamp. Write a function to compare
    timestamps?
*/
// typedef struct timestamp
// {
//     int dt;
//     int mt;
//     int year;
//     int hr;
//     int min;
//     int sec;

// }tstamp;

// int tstampCmp(tstamp t1, tstamp t2)
// {
//     if (t1.year > t2.year)
//     return 1;
//     else if (t1.year < t2.year)
//     return -1;
//     else
//     {
//         if (t1.mt > t2.mt)
//         return 1;
//         else if(t1.mt < t2.mt)
//         return -1;
//         else
//         {
//             if (t1.dt > t2.dt)
//             return 1;
//             else if(t1.dt < t2.dt)
//             return -1;
//             else
//             {
//                 if (t1.hr > t2.hr)
//                 return 1;
//                 else if (t1.hr < t2.hr)
//                 return -1;
//                 else
//                 {
//                     if (t1.min > t2.min)
//                     return 1;
//                     else if(t1.min < t2.min)
//                     return -1;
//                     else
//                     {
//                         if (t1.sec > t2.sec)
//                         return 1;
//                         else if(t1.sec < t2.sec)
//                         return -1;
//                         else
//                         return 0;
//                     }        
//                 }
//             }
//         }        
//     }
// }

// int main()
// {
//     tstamp t1 = {2, 5, 2025, 1, 30, 33};
//     tstamp t2 = {2, 10, 2024, 1, 30, 34};

//     printf("%d/%d/%d %d %d %d\n", t1.dt, t1.mt, t1.year, t1.hr, t1.min, t1.sec);
//     printf("%d/%d/%d %d %d %d\n", t2.dt, t2.mt, t2.year, t2.hr, t2.min, t2.sec);

//     int ans = tstampCmp(t1,t2);

//     printf("Timestamp comparison returns: %d\n", ans);
//     return 0;
// }