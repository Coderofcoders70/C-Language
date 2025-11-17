#include <stdio.h>

    /*
        Ques1. W.A.P with three functions:-

        1. GoodMorning function which prints "Good Morning".
        2. GoodAfternoon function which prints "Good Afternoon".
        3. GoodEvening function which prints "Good Evening".
     
    */

// This function is known as direct function:-
// ***************  DIRECT FUNCTION *************
// void goodMorning();
// void goodAfternoon();
// void goodEvening();

// int main()
// {
//     goodMorning();
//     goodAfternoon();
//     goodEvening();
//     return 0;
// }

// void goodMorning(){
//     printf("Good Morning Pineapple!!\n");
//     printf("Looking Good looking very nice...\n\n");
// }
// void goodAfternoon(){
//     printf("Good Afternoon Pineapple!!\n");
//     printf("Looking Good looking very nice...\n\n");
// }
// void goodEvening(){
//     printf("Good Evening Pineapple!!\n");
//     printf("Looking Good looking very nice...\n\n");
// }

// Function inside function is known as indirect function:-
// *************** INDIRECT FUNCTION OR FUNCTION INSIDE FUNCTION **************
// void goodMorning();
// void goodAfternoon();
// void goodEvening();

// int main()
// {
//     goodMorning();
//     return 0;
// }

// void goodMorning(){
//     printf("Good Morning Pineapple!!\n");
//     printf("Looking Good looking very nice...\n\n");
//     goodAfternoon();
//     goodEvening();
// }
// void goodAfternoon(){
//     printf("Good Afternoon Pineapple!!\n");
//     printf("Looking Good looking very nice...\n\n");
// }
// void goodEvening(){
//     printf("Good Evening Pineapple!!\n");
//     printf("Looking Good looking very nice...\n\n");
// }

    /*
        Ques2. Use the library function to calculate the area of a square with side a?
    */

// int main()
// {
//     int asq, val;

//     printf("Enter Input: ");
//     scanf("%d", &val);

//     asq = val * val;
//     printf("Area of Square: %d", asq);
// }

// int square(int num);

// int main()
// {
//     int asq, val;

//     printf("Enter Input: ");
//     scanf("%d", &val);

//     asq = square(val);
//     printf("Area of Square: %d", asq);
// }

// int square(int num)
// {
//     int area; 

//     area = num * num;
//     return area;
// }

