#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
// Practice set 1 
// Self practiced questions
// Q1. write a program to calculate area of rectangle:
// 1. user hard coded inputs.
// 2. user inputs supplied by the user.
// int main()
// {
//     1. Hard coded program

//     float l,w,area;
//     l = 7;
//     w = 5;

//     area = l * w;
//     if((int)area == area)
//     {
//         printf("Area of Rectangle: %d", (int)area);
//     }
//     else
//     {
//         printf("Area of Rectangle: %.2f", area);
//     }
//     return 0;
// }

// int main()
// {
//     2. User input

//     double l,w,area;

//     printf("Enter the length: ");
//     scanf("%lf", &l);
    
//     printf("Enter the width: ");
//     scanf("%lf", &w);

//     area = l * w;
//     if((int)area == area)
//     {
//         printf("Area of Rectangle: %d", (int)area);
//     }
//     else if(area < 0)
//     {
//         printf("No, using negative integers or floats to calculate the area of a rectangle is not a good practice");
//     }
//     else
//     {
//         printf("Area of Rectangle: %.2lf", area);
//     }
// }

// Q2. Calculate the area of the circle and modify the same program to caculate the volumne of a cylinder 
// given its radius and height?

// int main()
// {
//     double area, vol, r, h;

//     printf("Enter the value of the radius: ");
//     scanf("%lf", &r);
    
//     printf("Enter the height: ");
//     scanf("%lf", &h);

//     area = M_PI * r * r;
//     vol = M_PI * r * r * h;

//     if(r < 0 || h < 0)
//     {
//        printf("No, using negative integers or floats to calculate the area of a circle is not a good practice"); 
//     }
//     else
//     {
//         printf("Area of the circle: %.2lf\n", area);
//         printf("Volume of a cylinder: %.2lf", vol);
//     }
// }

// Q3. Write a program to convert celsius (centigrade degree) temperature to fahrenheit?
// int main()
// {
//     double temp, c;

//     printf("Enter the value of celsius: ");
//     scanf("%lf", &c);

//     temp = c * 9/5 + 32;

//     printf("The temperature in fahrenheit will be: %.1lfF", temp);
// }

// Q4. Write a program to calculate simple interest for a set of values representing 
// principal, no. of years, and rate of interest?
// int main()
// {
//     double si, p, r, t;

//     printf("Enter the amount of principal: ");
//     scanf("%lf", &p);
//     printf("Enter the rate of interest: ");
//     scanf("%lf", &r);
//     printf("Enter time: ");
//     scanf("%lf", &t);

//     si = p * r * t / 100;

//     if((int)si == si)
//     {
//         printf("Simple interest: %d", (int)si);
//     }
//     else
//     {
//         printf("Simple interest: %.1lf", si);
//     }
// }