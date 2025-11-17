#include <stdio.h>

//*********************PRACTICE SET = 7*****************

// int main()
// {
   /*
       Ques1.) Create an array of 10 numbers. Verify using pointer arithmetic that(ptr+2)
       points to the third element where ptr is a pointer pointing to the first element of 
       the array.
   */
//     int a[10] = {1,2,3,4,5,6,7,8,9,10};
//     int *ptr;
//     ptr = a;

//     for (int i = 0; i < 10; i++)
//     {
//         if (3==a[i])
//         {
//             printf("The element %d found at array index %d", *(ptr+2),i);
//         }
        
//     }
    
//     return 0;
// Another method:-
// int main()
// {
//     int a[10];
//     int *ptr = a;
//     ptr = ptr+2;

//     if (ptr == &a[2])
//     {
//         printf("The pointer is pointing at the same location");
//     }
//     else
//     {
//         printf("The pointer is not pointing at the same location");
//     }
    
//     return 0;
// }

// int main()
// {
     /*
       Ques2.) If S[3] is a 1-D Array of integers then *(s+3) refers to the third element.
       1. True
       2. False
       3. Depends
     

//     int s[3] = {1,2,3};
    
//     printf("%d", *(s+3)); // B is the correct option.
//     return 0;
// }

// int main()
// {
    /*
       Ques3.) w.a.p to create an array of 10 integers and store multiplication of table 5 
       in it.
    */

//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int n=5;

//     for (int i = 0; i < 10; i++)
//     {
//         int mult = n * a[i];
//         printf("%d\n", mult);
//     }

//     return 0;
// }

// int main()
// {
//     /*
//         Ques4.) Repeat Problem 3 for a general input provided by the user using 
//     */

//     int a[10], n;

//     printf("Enter the number of table: ");
//     scanf("%d", &n);

//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter range: ");
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         int res = n * a[i];
//         printf("%d\n", res);
//     }

//     return 0;
// }

// Another method:-
// int main()
// {
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int n;

//     printf("Enter a number to print its multiplication table: ");
//     scanf("%d", &n);

//     for (int i = 0; i < 10; i++)
//     {
//         int mult = n * a[i];
//         printf("%d\n", mult);
//     }
    
// }

/*
    Ques5.) w.a.p containing a function which reverses the array passed to it.

*/
// void reve(int a[])
// {
//     int rem, rev=0, n;
//     for (int i = 0; i < 10; i++)
//     {
//         n = a[i];
//     }
//     while (n>0)
//     {
//         printf("%d\n", n);
//         rev = n%10;
//         n--;
//     }
// }

// int main()
// {
//     int a[10] = {1,2,3,4,5,6,7,8,9,10};

//     reve(a);

//     return 0;
// }

//Another method:-
// void reverse(int a[], int num)
// {
//     int temp;
//     int start = 0;
//     int stop = num-1;

//     while (start < stop)
//     {
//         temp = a[start];
//         a[start] = a[stop];
//         a[stop] = temp;

//         start++;
//         stop--;
//     }

//     printf("Reversed array: ");
//     for (int i = 0; i < num; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
// }

// int main()
// {
//     int arr[10],n;
    
//     printf("Enter range: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter number: ");
//         scanf("%d", &arr[i]);
//     }

//     reverse(arr,n);
    
// }

//Another method:-
// void reverse(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int  j = i+1; j < n; j++)
//         {
//             if (a[j] > a[i])
//             {
//                 int temp = a[j];
//                 a[j] = a[i];
//                 a[i] = temp;
//             }
            
//         }
        
//     }

//     printf("Reversed array: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
// }

// int main()
// {
//     int arr[10],n;
    
//     printf("Enter range: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter number: ");
//         scanf("%d", &arr[i]);
//     }

//     reverse(arr,n);
    
// }

// Another method:-
// void reverse(int a[], int n)
// {
//     for (int i = 0; i < (n/2); i++)
//     {
//         int temp = a[i];
//         a[i] = a[n-i-1];
//         a[n-i-1] = temp;
//     }

//     printf("Reversed array: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
// }

// int main()
// {
//     int arr[10],n;
    
//     printf("Enter range: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter number: ");
//         scanf("%d", &arr[i]);
//     }

//     reverse(arr,n);
    
// }

/*
    Ques6.) w.a.p containing function which counts the number of positive integer in an
    array.
*/
// int countPosInt(int arr[])
// {
//     int count=0;
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//         if (arr[i] > 0)
//         {
//             arr[i] %= 10;
//             count++;
//         }
//     }
//     return count;
// }
// int main()
// {
//     int a[10] = {1,-2,3,4,5,-3,7,0,-9,10};
//     int n;

//     int ans = countPosInt(a);
//     printf("\n");
//     printf("Positive Integers are : %d", ans);
//     return 0;
// }

// int main()
// {
/*
    Ques7.) Create an array of size 3X10 containing multiplication tables of the numbers
    2,7, and 9 respec
*/

//     int a[3][10];
//     int n[3]={2,7,9};

//     for (int i = 0; i < 3; i++)
//     {   
//         for (int j = 0; j < 10; j++)
//         {
//             a[i][j] = n[i] * (j+1);
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Multiplication table of %d: ", n[i]);   
//         for (int j = 0; j < 10; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main()
// {
//     /*
//         Ques8.) Repeat the problem 7 for a custom input given by the user.
//     */

//     int a[3][10];
//     int n;

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter the number of multiplication table: ");
//         scanf("%d", &a[i][1]);
        
//         for (int j = 0; j < 10; j++)
//         {
//             printf("Enter range: ");
//             scanf("%d", &a[0][j]);
//         }
        
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         int r = a[i][1];
//         printf("Number: %d: ", a[i][1]);
        
//         for (int j = 0; j < 10; j++)
//         {
//             int c = a[0][j];
//             printf("%d ", r*c);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// Another method:-
// int main()
// {
//     int a[3][10];
//     int n[3];

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter the number: ");
//         scanf("%d", &n[i]);
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             a[i][j] = n[i] * (j+1);
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Multiplication table of %d: ", n[i]);
//         for (int j = 0; j < 10; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
    
// }

// int main()
// {
/*
   Ques9.) Create a three-dimensional array and print the address of its elements in an 
   increasing order.
*/

//     int a[2][2][2];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; k < 2; k++)
//             {
//                 printf("Address of [%d] [%d] [%d] is %d\n", i,j,k,&a[i][j][k]);
//             }
            
//         }
        
//     }
    
//     return 0;
// }

// Ques10.) w.a.p to calculate sum and average of an array?
// int main()
// {
//     int a[10],n,sum=0;
//     float avg;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];
//     }
//     avg = sum/n;

//     printf("Sum of %d is %d\n", n,sum);
//     printf("Average is %.1f", avg);
// }

// Ques11.) w.a.p to insert number at the beginning of an array?
// int main()
// {
//     int a[10],n,ele;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter any number that you want to insert: ", n);
//     scanf("%d", &ele);
//     n++;

//     for (int i = n; i>0; i--)
//     {
//         a[i-1] = a[i-2];
//     }
//     a[0] = ele;

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
// }

// Ques12.) w.a.p to insert number at specified position of an array?
// int main()
// {
//     int a[10],n,ele,pos;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter the position where you want to add the number: ");
//     scanf("%d", &pos);
//     printf("Enter any number that you want to insert: ");
//     scanf("%d", &ele);
//     n++;

//     for (int i = n; i>pos; i--)
//     {
//         a[i-1] = a[i-2];
//     }
//     a[pos-1] = ele;

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
// }

// Ques13.) w.a.p to insert number at the end of an array?
// int main()
// {
//     int a[10],n,ele;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter any number that you want to insert: ");
//     scanf("%d", &ele);
//     n++;

//     a[n-1] = ele;

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
// }

// Ques14.) w.a.p to delete number from the beginning of an array?
// int main()
// {
//     int a[10],n,ele;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter the first number to remove from the series: ");
//     scanf("%d", &ele);

//     for (int i = 1; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
// }
// Another method:-
// int main()
// {
//     int a[10],n,ele;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter the first number to remove from the series: ");
//     scanf("%d", &ele);
//     n--;

//     for (int i = 0; i < n; i++)
//     {
//         a[i] = a[i+1];
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
// }

// Ques15.) w.a.p to delete number from a specific position of an array?
// int main()
// {
//     int a[10],n,ele,pos;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter the number to remove from the series: ");  
//     scanf("%d", &ele);
//     printf("Enter position of the number you want to remove: ");
//     scanf("%d", &pos);
//     n--;

//     for (int i = pos; i<=n; i++)
//     {
//         a[i-1] = a[i];
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
// }

// Ques16.) w.a.p to delete number from end position of an array?
// int main()
// {
//     int a[10],n,ele;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter end number of series you want to remove: ");  
//     scanf("%d", &ele);
    
//     for (int i = 0; i < n-1; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
// }

// Ques17.) w.a.p to update an array?
// int main()
// {
//     int a[10],n,ele,pos;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter the number of position you want to update: ");  
//     scanf("%d", &pos);
//     printf("Enter the number you want to add: ");  
//     scanf("%d", &ele);

//     for (int i = pos; i <= n; i++)
//     {
//         a[i-1] = ele;
//         break;
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
// }
// Another method:-
// int main()
// {
//     int a[10],n,ele,pos;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Enter the number of position you want to update: ");  
//     scanf("%d", &pos);
//     printf("Enter the number you want to add: ");  
//     scanf("%d", &ele);

//     a[pos-1] = ele;

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
// }

// Ques18. Wap to check smallest and biggest value in a number series?
// int main()
// {
//     int a[10], n;
//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int small = a[0];
//     int big = a[0];
    
//     for (int i = 0; i < n; i++)
//     {
//         if (small > a[i])
//         {
//             small = a[i];
//         }
//         else if (big < a[i])
//         {
//             big = a[i];
//         }
        
//     }
    
//     printf("Smallest value: %d\n", small);
//     printf("Biggest value: %d\n", big);

// }

// Ques19. w.a.p to perform linear search operation in an array using flag to find a key?
// int main()
// {
//     int a[10],key,n,flag=0;
    
//     printf("Enter range: ");
//     scanf("%d", &n);
    
//     printf("Enter %d elements\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the element you want to search: ");
//     scanf("%d", &key);

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == key)
//         {
//             flag=1;
//             break;
//         }
//     }
//     if (flag)
//     {
//         printf("Key is found successfully!");
//     }
//     else
//     {
//         printf("Key is not found!");
//     }

//     return 0;
// }

/*
    Ques20. w.a.p to perform binary search operation in an array using flag to find a key?
*/ 
// int main()
// {
//     int a[10],key,n,flag=0;
    
//     printf("Enter range: ");
//     scanf("%d", &n);
    
//     printf("Enter %d elements\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the element you want to search: ");
//     scanf("%d", &key);

//     int l = 0;
//     int h = n-1;
    
//     while (l <= h)
//     {
//         int mid = (l+h)/2;
//         if (key == a[mid])
//         {
//             flag=1;
//             printf("Key found at position %d & index value %d\n", mid+1, mid);
//             break;
//         }
//         else if (key < a[mid])
//         {
//             h = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }
    
//     if (flag)
//     {
//         printf("Key is found successfully!");
//     }
//     else
//     {
//         printf("Key not found");
//     }
    
//     return 0;
// }

// Ques 21. w.a.p to print the simple matrix of 2x2?  
// int main()
// {
//     int mat[10][10];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             scanf("%d", &mat[i][j]);  
//         }
         
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", mat[i][j]);
//         }
//         printf("\n");         
//     }
    
//     return 0;
// }

// Ques 22. w.a.p to print the simple matrix of nxn?  
// int main()
// {
//     int mat[10][10],n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &mat[i][j]);  
//         }
         
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ", mat[i][j]);
//         }
//         printf("\n");         
//     }
    
//     return 0;
// }

// Ques 23. w.a.p to add two matrices.  
// int main()
// {
//     int a[10][10],b[10][10],c[10][10],n1,n2;

//     printf("Enter range of matrix1: ");
//     scanf("%d", &n1);
//     printf("Enter range of matrix2: ");
//     scanf("%d", &n2);

//     if (n1==n2)
//     {
//         printf("Enter elements for Matrix1:\n");
//         for (int i = 0; i < n1; i++)
//         {
//             for (int j = 0; j < n1; j++)
//             {
//                 scanf("%d", &a[i][j]);  
//             }
            
//         }

//         printf("Enter elements for Matrix2:\n");
//         for (int i = 0; i < n2; i++)
//         {
//             for (int j = 0; j < n2; j++)
//             {
//                 scanf("%d", &b[i][j]);  
//             }
            
//         }

//         printf("Displaying Matrix1:\n");
//         for (int i = 0; i < n1; i++)
//         {
//             for (int j = 0; j < n1; j++)
//             {
//                 printf("%d ", a[i][j]);
//             }
//             printf("\n");         
//         }

//         printf("Displaying Matrix2:\n");
//         for (int i = 0; i < n2; i++)
//         {
//             for (int j = 0; j < n2; j++)
//             {
//                 printf("%d ", b[i][j]);
//             }
//             printf("\n");         
//         }

//         for (int i = 0; i < n1; i++)
//         {
//             for (int j = 0; j < n1; j++)
//             {
//                 c[i][j] = a[i][j] + b[i][j];
//             }
//             printf("\n");         
//         }
        
//         printf("Addition of both the matrices:\n");
//         for (int i = 0; i < n1; i++)
//         {
//             for (int j = 0; j < n1; j++)
//             {
//                 printf("%d ", c[i][j]);
//             }
//             printf("\n");         
//         }

//     }
//     else
//     {
//         printf("Range of both the matrices are not same\n");
//     }
    
//     return 0;
// }

// Ques 24. w.a.p to multiply two matrices.  
// int main()
// {
//     int a[10][10],b[10][10],c[10][10],n1,n2;

//     printf("Enter range of matrix1: ");
//     scanf("%d", &n1);
//     printf("Enter range of matrix2: ");
//     scanf("%d", &n2);

//     if (n1==n2)
//     {
//         printf("Enter elements for Matrix1:\n");
//         for (int i = 0; i < n1; i++)
//         {
//             for (int j = 0; j < n1; j++)
//             {
//                 scanf("%d", &a[i][j]);  
//             }
            
//         }

//         printf("Enter elements for Matrix2:\n");
//         for (int i = 0; i < n2; i++)
//         {
//             for (int j = 0; j < n2; j++)
//             {
//                 scanf("%d", &b[i][j]);  
//             }
            
//         }

//         printf("Displaying Matrix1:\n");
//         for (int i = 0; i < n1; i++)
//         {
//             for (int j = 0; j < n1; j++)
//             {
//                 printf("%d ", a[i][j]);
//             }
//             printf("\n");         
//         }

//         printf("Displaying Matrix2:\n");
//         for (int i = 0; i < n2; i++)
//         {
//             for (int j = 0; j < n2; j++)
//             {
//                 printf("%d ", b[i][j]);
//             }
//             printf("\n");         
//         }

//         for (int i = 0; i < n1; i++)
//         {
//             for (int j = 0; j < n1; j++)
//             {
//                 c[i][j] = a[i][j] * b[i][j];
//             }
//             printf("\n");         
//         }

//         printf("Multiplication of both the matrices:\n");
//         for (int i = 0; i < n1; i++)
//         {
//             for (int j = 0; j < n1; j++)
//             {
//                 printf("%d ", c[i][j]);
//             }
//             printf("\n");         
//         }

//     }
//     else
//     {
//         printf("Range of both the matrices are not same\n");
//     }
    
//     return 0;
// }

// Ques 25. w.a.p to transpose a matrix.  
// int main()
// {
//     int a[10][10],transp[10][10],r,c;

//     printf("Enter range of rows: ");
//     scanf("%d", &r);
//     printf("Enter range of columns: ");
//     scanf("%d", &c);

//     printf("Enter elements for Matrix:\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);  
//         }
        
//     }

//     printf("Displaying Matrix:\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");         
//     }

//     for (int i = 0; i < c; i++)
//     {
//         for (int j = 0; j < r; j++)
//         {
//             transp[i][j] = a[j][i];
//         }
//         printf("\n");         
//     }

//     printf("Transpose of Matrix:\n");
//     for (int i = 0; i < c; i++)
//     {
//         for (int j = 0; j < r; j++)
//         {
//             printf("%d ", transp[i][j]);
//         }
//         printf("\n");         
//     }
    
//     return 0;
// }

// Ques 26. w.a.p to print the sum of diagonals of a matrix.  
// int main()
// {
//     int a[10][10],sum=0,r,c;

//     printf("Enter range of rows: ");
//     scanf("%d", &r);
//     printf("Enter range of columns: ");
//     scanf("%d", &c);

//     if (r==c)
//     {
//         printf("Enter elements for Matrix:\n");
//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < c; j++)
//             {
//                 scanf("%d", &a[i][j]);  
//             }
            
//         }

//         printf("Displaying Matrix:\n");
//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < c; j++)
//             {
//                 printf("%d ", a[i][j]);
//             }
//             printf("\n");         
//         }

//         for (int i = 0; i < r; i++)
//         {
//             sum += a[i][i];      
//         }

//         printf("Sum of diagonals is %d ", sum);

//     }
//     else
//     {
//         printf("Range of rows and columns must be the same\n");
//     }
    
//     return 0;
// }

// Ques 27. w.a.p to print the identity of a matrix. 
// int main()
// {
//     int a[10][10];

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             if (i == j)
//             {
//                 printf("1 ");
//             }
//             else
//             {
//                 printf("0 ");
//             }
            
//         }
//         printf("\n");
//     }

//     return 0;
// }

/* Ques 28. w.a.p to perform an operation using selection sort in array for ascending 
order. */
// int main()
// {
//     int a[10],n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         int min = i;
        
//         for (int j = i+1; j < n; j++)
//         {
//             if (a[j] < a[min])
//             {
//                 min = j;
//             }
//         }

//         if (min != i)
//         {
//             int temp;
//             temp = a[i];
//             a[i] = a[min];
//             a[min] = temp;
//         }
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }

/* Ques 29. w.a.p to perform an operation using selection sort in array for descending 
order. */
// int main()
// {
//     int a[10],n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         int min = i;
        
//         for (int j = i+1; j < n; j++)
//         {
//             if (a[j] < a[min])
//             {
//                 min = j;
//             }
//         }

//         if (min != i)
//         {
//             int temp;
//             temp = a[i];
//             a[i] = a[min];
//             a[min] = temp;
//         }
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }

/* Ques 30. w.a.p to perform an operation using Bubble sort in array for ascending 
order. */
// int main()
// {
//     int a[10],n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     for (int i = 0; i < n; i++)
//     {   
//         for (int j = 0; j < n-1-i; j++)
//         {
//             if (a[j+1] < a[j])
//             {
//                 int temp;
//                 temp = a[j+1];
//                 a[j+1] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }

/* Ques 31. w.a.p to perform an operation using Bubble sort in array for descending 
order. */
// int main()
// {
//     int a[10],n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     for (int i = 0; i < n; i++)
//     {   
//         for (int j = 0; j < n-1-i; j++)
//         {
//             if (a[j+1] < a[j])
//             {
//                 int temp;
//                 temp = a[j+1];
//                 a[j+1] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }

/* Ques 32. w.a.p to perform an operation using Insertion sort in array for ascending 
order. */
// int main()
// {
//     int a[10],n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     for (int i = 0; i < n; i++)
//     {   
//         int key = a[i];
//         int j = i-1;
        
//         while (j>=0 && a[j] > key)
//         {
//             a[j+1] = a[j];
//             j--;
//         }
//         a[j+1] = key;
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }

/* Ques 33. w.a.p to perform an operation using Bubble sort in array for descending 
order. */
// int main()
// {
//     int a[10],n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     for (int i = 0; i < n; i++)
//     {   
//         int key = a[i];
//         int j = i-1;
        
//         while (j>=0 && a[j] < key)
//         {
//             a[j+1] = a[j];
//             j--;
//         }
//         a[j+1] = key;
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }

/* Ques 34. w.a.p to perform an operation using Merge sort in array for ascending 
order. */
// void merge(int arr[], int low, int mid, int high)
// {
//     int i = low;
//     int j = mid + 1;
//     int k = 0;
//     int temp[(high - low) + 1];

//     while (i <= j && j <= high)
//     {
//         if (arr[j] > arr[i])
//         {
//             temp[k++] = arr[i++];
//         }
//         else
//         {
//             temp[k++] = arr[j++];
//         }
//     }

//     while (i <= j)
//     {
//         temp[k++] = arr[i++];
//     }
    
//     while (j <= high)
//     {
//         temp[k++] = arr[j++];
//     }
    
//     for (int i=low,k=0; i <= high; i++,k++)
//     {
//         arr[i] = temp[k];
//     }
    
// }

// void mergesort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int mid=(low+high)/2;
//         mergesort(arr,low,mid);
//         mergesort(arr,mid + 1,high);
//         merge(arr,low,mid,high);
//     }
    
// }

// int main()
// {
//     int a[10],n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     mergesort(a, 0, n-1);

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }

/* Ques 35. w.a.p to perform an operation using Merge sort in array for descending 
order. */
// void merge(int arr[], int low, int mid, int high)
// {
//     int i = low;
//     int j = mid + 1;
//     int k = 0;
//     int temp[(high - low) + 1];

//     while (i <= j && j <= high)
//     {
//         if (arr[j] < arr[i])
//         {
//             temp[k++] = arr[i++];
//         }
//         else
//         {
//             temp[k++] = arr[j++];
//         }
//     }

//     while (i <= j)
//     {
//         temp[k++] = arr[i++];
//     }
    
//     while (j <= high)
//     {
//         temp[k++] = arr[j++];
//     }
    
//     for (int i=low,k=0; i <= high; i++,k++)
//     {
//         arr[i] = temp[k];
//     }
    
// }

// void mergesort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int mid=(low+high)/2;
//         mergesort(arr,low,mid);
//         mergesort(arr,mid + 1,high);
//         merge(arr,low,mid,high);
//     }
    
// }

// int main()
// {
//     int a[10],n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     mergesort(a, 0, n-1);

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }

/* Ques 36. w.a.p to perform an operation using Quick sort in array for ascending 
order. */
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[high];
//     int i = low-1;
    
//     for (int j=low; j < high; j++)
//     {
//         if (arr[j] < pivot)
//         {
//             i++;
//             swap(&arr[i], &arr[j]);
//         }   
//     }
    
//     swap(&arr[i+1], &arr[high]);
//     return i+1;
// }

// void quicksort(int arr[], int left, int right)
// {
//     if (left < right)
//     {
//         int pi= partition(arr,left,right);
//         quicksort(arr,left,pi-1);
//         quicksort(arr,pi+1,right);
//     }
    
// }

// int main()
// {
//     int a[10],n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     quicksort(a, 0, n-1);

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }

/* Ques 37. w.a.p to perform an operation using Quick sort in array for descending 
order. */
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[high];
//     int i = low-1;
    
//     for (int j=low; j < high; j++)
//     {
//         if (arr[j] > pivot)
//         {
//             i++;
//             swap(&arr[i], &arr[j]);
//         }   
//     }
    
//     swap(&arr[i+1], &arr[high]);
//     return i+1;
// }

// void quicksort(int arr[], int left, int right)
// {
//     if (left < right)
//     {
//         int pi= partition(arr,left,right);
//         quicksort(arr,left,pi-1);
//         quicksort(arr,pi+1,right);
//     }
    
// }

// int main()
// {
//     int a[10],n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     quicksort(a, 0, n-1);

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }

// Ques 38. w.a.p to print largest element of an array?
// int main()
// {
//     int a[10], n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j <= n; j++)
//         {
//             if (a[j] < a[i])
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
    
//     printf("Largest element: %d", a[n-1]);
//     return 0;
// }

// Optimal method:-
// int main()
// {
//     int a[10], n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     int larg = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (larg < a[i])
//         {
//             larg = a[i];
//         }
//     }
    
//     printf("Largest element: %d", larg);
//     return 0;
// }

// Ques 39. w.a.p to print second largest element of an array?
// int main()
// {
//     int a[10], n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     int larg = a[0];
//     int secLarg;

//     for (int i = 1; i < n; i++)
//     {
//         if (larg < a[i])
//         {
//             larg = a[i];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j <= n; j++)
//         {
//             if (a[j] < a[i])
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
    
//     for (int i = n-2; i>0; i--)
//     {
//         if (a[i] < larg)
//         {
//             secLarg = a[i];
//             break;
//         }
//     }
    
//     printf("Second Largest element: %d", secLarg);
//     return 0;
// }

// Better method:-
// int main()
// {
//     int a[10], n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     int larg = a[0];
//     int secLarg = -1;

//     for (int i = 1; i < n; i++)
//     {
//         if (larg < a[i])
//         {
//             larg = a[i];
//         }
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > secLarg && a[i] != larg)
//         {
//             secLarg = a[i];
//         }
//     }
    
//     printf("Second Largest element: %d", secLarg);
//     return 0;
// }

// Optimal method:-
// int main()
// {
//     int a[10], n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     int larg = a[0];
//     int secLarg = -1;
    
//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] > larg)
//         {
//             secLarg = larg;
//             larg = a[i];
//         }
//         else if (a[i] > secLarg && a[i] < larg)
//         {
//             secLarg = a[i];
//         }
        
//     }
    
//     printf("Second Largest element: %d", secLarg);                                                
//     return 0;
// }

// Ques 40. w.a.p to print smallest element of an array?
// int main()
// {
//     int a[10],n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     int small = a[0];

//     for (int i = 0; i < n; i++)
//     {

//         if (a[i] < small)
//         {
//             small = a[i];
//         }
        
//     }

//     printf("Smallest number: %d", small);
    
//     return 0;
// }

// Ques 41. w.a.p to print second smallest element of an array?
// int main()
// {
//     int a[10], n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     int smallest = a[0];
//     int secSmall = -1;
    
//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] < smallest)
//         {
//             secSmall = smallest;
//             smallest = a[i];
//         }
//         else if (a[i] < secSmall && a[i] > smallest)
//         {
//             secSmall = a[i];
//         }
        
//     }
    
//     printf("Second Smallest element: %d", secSmall);                                                
//     return 0;
// }

// Ques 42. w.a.p to print simple sorting of an array?
// int main()
// {
//     int a[10], n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (a[j] < a[i])
//             {
//                 int temp = a[j];
//                 a[j] = a[i];
//                 a[i] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }

// Ques 43. Remove the duplicate value in an array?
// int main()
// {
//     int a[10], n;

//     printf("Enter range: ");
//     scanf("%d", &n);

//     printf("Enter %d elements\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 for (int k = j; k < n; k++)
//                 {
//                     a[k] = a[k+1];
//                 }
//                 n--;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }


