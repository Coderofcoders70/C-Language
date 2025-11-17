#include <stdio.h>
#include <string.h>

// int main()
// {
//     char str[] = {'L', 'A', 'K', 'S', 'H', 'A', 'Y', 'A', '\0'};
//     char str[] = "LAKSHAYA";
//     printf("%s", str);
//     return 0;
// }

// int main()
// {
//     char str[] = "LAKSHAYA";
//     char *ptr = str;

//     while (*ptr != '\0')
//     {
//         printf("%c", *ptr);
//         ptr++;
//     }
    
//     return 0;
// }

// int main()
// {
//     // ************CONVENIENT WAY TO PRINT A STRING USING STRING SPECIFIER**********
//     char *ptr = "LAKSHAYA";
//     printf("%s", ptr);
//     return 0;
// }

// int main()
// {
//     char str[100];

//     printf("Enter your name: ");
//     scanf("%s", str);

//     printf("Hello %s!!", str);
//     return 0;
// }

// ************ USE OF GETS AND PUTS IN STRING **************
// int main()
// {
//     char str[100];

//     printf("Enter your name: ");
//     gets(str); // It is used to store multiple words 

//     printf("Hello %s!!", str);
//     return 0;
// }

// int main()
// {
//     char str[100];

//     printf("Enter message: ");
//     gets(str);

//     printf("%s", str);
//     return 0;
// }

// int main()
// {
//     char str[100];

//     printf("Enter message: ");
//     gets(str);

//     puts(str);
//     return 0;
// }

// int main()
// {
//     // char str[] = "Lakshaya Sharma";
//     char *ptr = "Lakshaya Sharma";
//     // str[] = "Ritik Sharma";
//     ptr = "Ritik Sharma";

//     printf("%s", ptr);

//     return 0;
// }

// ****************STANDARD LIBRARAY FUNCTION FOR STRINGS:-********************
// 1. Strlen
// int main()
// {
//     char *ptr = "Lakshaya";
//     int len = strlen(ptr);

//     printf("The length of the string is %d", len);

//     return 0;
// }

// void leng(char *str)
// {
//     int len = strlen(str);
//     printf("The length of the string is %d", len);
// }

// int main()
// {
//     char *ptr = "Lakshaya";
    
//     leng(ptr);

//     return 0;
// }

// 2. Strcpy
// int main()
// {
//     char *str1 = "Lakshaya";
//     char str2[100];

//     strcpy(str2, str1);

//     printf("%s", str2);
//     return 0;
// }

// 3. Strcat
// int main()
// {
//     char str1[100] = "Lakshaya"; //First string should have enough space than second string.
//     char *str2 = "Sharma"; // Second string

//     strcat(str1, str2);

//     printf("%s", str1);
//     return 0;
// }

// 3. Strcmp
// int main()
// {
//     char str1[100] = "Lakshaya"; 
//     char *str2 = "Sharma"; 

//     // int cmp = strcmp(str1, str2);
//     int cmp = strcmp("Lakshaya", "Sharma");

//     printf("Comparison of both the strings returns: %d", cmp);
//     return 0;
// }

