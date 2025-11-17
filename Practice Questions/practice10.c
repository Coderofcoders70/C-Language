#include <stdio.h>

// ********************* PRACTICE SET - 10 **********************
// ************************ FILE I/O ****************************

// Ques1. W.a.p to read three integers from a file?
// int main()
// {
//     FILE *ptr;

//     ptr = fopen("pr10_ques1.txt", "r");
//     int num1;
//     int num2;
//     int num3;

//     fscanf(ptr, "%d", &num1);
//     fscanf(ptr, "%d", &num2);
//     fscanf(ptr, "%d", &num3);

//     printf("The value of num1 is %d\n", num1);
//     printf("The value of num2 is %d\n", num2);
//     printf("The value of num3 is %d\n", num3);
//     fclose(ptr);

//     return 0;
// }

/*
    Ques2. W.a.p to generate multiplication table of a given number in text format. Make 
    sure that the file is readable and well formatted.
*/
// int main()
// {
//     FILE *ptr;

//     ptr = fopen("pr10_ques2.txt", "w");
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);
//     fprintf(ptr, "Multiplication of table %d is:\n", num);
//     for (int i = 0; i < 10; i++)
//     {
//         int mult = num * (i+1);
//         fprintf(ptr, "%d x %d = %d\n", num, i+1, mult);
//     }
//     fclose(ptr);

//     return 0;
// }

/*
    Ques3. W.a.p to read a text file character by character and write its content twice in 
    a separate file.
*/
// int main()
// {
//     FILE *ptr;

//     ptr = fopen("pr10_ques3.txt", "r");
    
//     printf("%c", fgetc(ptr));
//     printf("%c", fgetc(ptr));
//     printf("%c", fgetc(ptr));
//     printf("%c", fgetc(ptr));
//     printf("%c", fgetc(ptr));
//     printf("%c", fgetc(ptr));
//     printf("%c", fgetc(ptr));
//     printf("%c", fgetc(ptr));
//     printf("%c", fgetc(ptr));
//     printf("%c", fgetc(ptr));
//     printf("%c", fgetc(ptr));
    
    
//     ptr = fopen("pr10_ques3_write.txt", "w");
//     fprintf(ptr,"1. Programming means to make computer understand what to do how to do & when to do\n");
//     fprintf(ptr,"2. Programming is really a fun if your basics are clear\n");
//     fclose(ptr);

//     return 0;
// }

// Correct method:-
// int main()
// {
//     FILE *ptr1;
//     FILE *ptr2;

//     ptr1 = fopen("pr10_ques3.txt", "r");
//     char ch = fgetc(ptr1);
//     // while (ch != EOF) // To check the text in the file.
//     // {
//     //     printf("%c", ch);
//     //     ch = fgetc(ptr1);
//     // }
    
//     ptr2 = fopen("pr10_ques3_write.txt", "w");
//     while (ch != EOF)
//     {
//         fputc(ch, ptr2);
//         fputc(ch, ptr2);
//         ch = fgetc(ptr1);
//     }
    
//     fclose(ptr1);
//     fclose(ptr2);

//     return 0;
// }

/*
    Ques4. Take name and salary of two employees as input from the user and write them to 
    a text file in the following format:-

        name1, 33000
        name2, 77000
*/
// int main()
// {
//     FILE *ptr;

//     char name1[20];
//     char name2[20];
//     int sal1;
//     int sal2;
//     printf("Enter the first name: ");
//     scanf("%s", name1);
//     printf("Enter salary: ");
//     scanf("%d", &sal1);
    
//     printf("Enter the second name: ");
//     scanf("%s", name2);
//     printf("Enter salary: ");
//     scanf("%d", &sal2);
    
//     ptr = fopen("pr10_ques4.txt", "w");
//     fprintf(ptr,"%s, %d\n", name1,sal1);
//     fprintf(ptr,"%s, %d\n", name2,sal2);
//     fclose(ptr);

//     return 0;
// }

// Ques5. W.a.p to modify a file containing an integer to double its value?
// int main()
// {
//     FILE *ptr;

//     ptr = fopen("pr10_ques5i.txt", "r");
//     int num1;

//     fscanf(ptr, "%d", &num1);
//     printf("The previous value was %d", num1);

//     ptr = fopen("pr10_ques5ii.txt", "w");
//     int res, num2 = 2;

//     res = num1 * num2;
//     fprintf(ptr, "New Value is %d", res);
//     fclose(ptr);

//     return 0;
// }