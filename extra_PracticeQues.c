#include <stdio.h>
#include <math.h>

// int main()
// {
//     // Ques 1. Sum between two numbers. 
    
//     int a,b,sum=0;

//     printf("Enter a: ");
//     scanf("%d", &a);

//     printf("Enter b: ");
//     scanf("%d", &b);

//     int ac = a;

//     while (a<=b)
//     {
//         sum += a;
//         a++;
//     }
//     printf("Sum from the range %d to %d is %d", ac,b,sum);
    
//     return 0;
// }

// Ques 2. Profit and loss
// int main()
// {
//     int cp,sp;

//     printf("Enter Cost Price: ");
//     scanf("%d", &cp);

//     printf("Enter Selling Price: ");
//     scanf("%d", &sp);

//     if (sp > cp)
//     {
//         int profit = sp - cp;
//         printf("Profit: %d", profit);
//     }
//     else if (cp > sp)
//     {
//         int loss = cp - sp;
//         printf("Loss: %d", loss);
//     }
//     else
//     {
//         printf("Neither profit nor loss");
//     }
    
//     return 0;
// }

// Ques 3. Compound Interest 
// int main()
// {
//     float p,r,t;
//     float ci;

//     printf("Enter amount: ");
//     scanf("%f", &p);

//     printf("Enter rate of interest: ");
//     scanf("%f", &r);
    
//     printf("Enter time: ");
//     scanf("%f", &t);

//     ci = p*(pow((1+r/100),t));

//     printf("Compoud Interest: %.2f", ci);
    
//     return 0;
// }

// Ques 4. Tribonacci Series
// int main()
// {
//     int n1=0, n2=1, n3=2, n4, range;

//     printf("Enter range: ");
//     scanf("%d", &range);

//     for (int i = 1; i <= range; i++)
//     {
//         printf("%d ", n1);
//         n4 = n1+n2+n3;
//         n1=n2;
//         n2=n3;
//         n3=n4;
//     }

//     return 0;
// }

// Ques 5. Decimal to Binary 
// int main()
// {
//     int bi=0, base=1,num,rem=0;

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     int dec = num;

//     while (num!=0)
//     {
//         rem=num%2;
//         bi = bi+rem*base;
//         num/=2;
//         base = base * 10;
//     }

//     printf("Binary of %d is %d", dec,bi);
    
//     return 0;
// }

// Ques 6. Binary to Decimal 
// int main()
// {
//     int dec=0,base=1,num,rem;

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     int cn = num;

//     while (num!=0)
//     {
//         rem=num%10;
//         dec = dec+base*rem;
//         num/=10;
//         base = base * 2;
//     }

//     printf("Decimal of %d is %d", cn,dec);
    
//     return 0;
// }

// Ques 7. Perfect Square Numbers
// int main()
// {
//     int ps,range;

//     printf("Enter Input: ");
//     scanf("%d", &range);

//     printf("Perfect Square from 1 to %d are:-\n", range);
//     for (int i = 1; i <= range; i++)
//     {
//         ps = sqrt(i);
//         if (ps*ps == i)
//         {
//             printf("%d ", i);
//         }
        
//     }
  
//     return 0;
// }

// Ques 8. Sum of digits of a number
// int main()
// {
//     int num,rem=0,sum=0;

//     printf("Enter Input: ");
//     scanf("%d", &num);

//     int cn = num;

//     while (num!=0)
//     {
//         rem=num%10;
//         sum += rem*1;
//         num /= 10;
//     }
//     printf("Sum of %d is %d", cn,sum);
  
//     return 0;
// }