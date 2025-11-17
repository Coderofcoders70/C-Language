#include <stdio.h>
#include <string.h>

// ********************PRACTICE SET - 8*****************
// ********************** STRINGS ****************

/*
    Ques1. Which of the following is used to appropriately read a multi-word string:-
    1. gets
    2. puts
    3. printf()
    4. scanf()

    Ans. gets() is a pre defined function in c which is used to read a multi-word string.
*/

/*
    Ques2. w.a.p to take string as an input from the user using %c and %s. Confirm that the
    strings are equal.
*/
// int main()
// {
//     char str1[10];
//     char *ptr1 = str1;
//     char str2[10];
//     char *ptr2 = str2;
//     int i = 0;

//     printf("Enter a string: ");
//     while (i < 8)
//     {
//         scanf("%c", ptr1);
//         i++;
//         ptr1++;
//     }
    
//     ptr1 = str1;

//     printf("Enter the string again: ");
//     scanf("%s", ptr2);
    
//     if (*ptr1 == *ptr2)
//     {
//         printf("Both the strings are equal");
//     }
//     else
//     {
//         printf("Both the strings are not equal");
//     }

//     return 0;
// }

//Another method:-
// int main()
// {
//     char str1[10];
//     char str2[10];
//     char ch;
//     int i = 0;

//     printf("Enter the string: ");
//     scanf("%s", str1);
    
//     printf("Enter the string again:\n");
//     while (ch != '\n')
//     {
//         fflush(stdin); // Just to remove the extra values or garbage value.
//         scanf("%c", &ch);
//         str2[i] = ch;
//         i++;
//     }

//     str2[i-1] = '\0';
//     printf("Both the string returns : %d", strcmp(str1, str2));

//     return 0;
// }

/*
    Ques3. w.a.p your own version of strlen function from <string.h>.
*/
// void leng(char *ptr)
// {
//     int len = strlen(ptr);
//     printf("Total Characters in the string: %d\n", len);

//     printf("Your string:\n");
//     for (int i = 0; i < len; i++)
//     {
//         printf("%s\n", ptr);
//     }
    
// }

// int main()
// {
//     char str1[10];

//     printf("Enter a string: ");
//     scanf("%s", str1);

//     leng(str1);

//     return 0;
// }

// Correct method:-
// int strlen(char *ptr)
// {
//     int len = 0;
//     while (*ptr != '\0')
//     {
//         len++;
//         ptr++;
//     }

//     return len;
// }

// int main()
// {
//     char str[50];

//     printf("Enter a string: ");
//     scanf("%s", str);

//     int ans = strlen(str);
//     printf("The length of the string is %d", ans);
    
//     return 0;
// }

/*
    Ques4. Write a function slice() to slice a string. It should change the original string
    such that it is now the sliced string. Take m and n as the start and ending position
    for slice.
*/

// void slice(char s[], char *res, int m, int n)
// {
//     int j = 0;
//     for (int i = m; i < n; i++)
//     {
//         res[j++] = s[i];
//     }
    
//     res[j] = '\0';
// }

// int main()
// {
//     char str1[50] = "Hello World";
//     char result[50];
    
//     slice(str1, result, 6, 11);

//     printf("Original string: %s\n", str1);
//     printf("Sliced string: %s", result);
//     return 0;
// }

//Another method:-
// void slice(char *s, int m, int n)
// {
//     int i = 0;
//     while ((m+i) < n)
//     {
//         s[i] = s[i+m];s
//         i++;
//     }
//     s[i] = '\0';
// }

// int main()
// {
//     char str[50] = "Hello World";
    
//     printf("Original string: %s\n", str);
    
//     slice(str, 1, 6);

//     printf("Sliced string: %s\n", str);
//     return 0;
// }

/*
    Ques5. Write your version of strcpy function from <string.h>.
*/
// void copy(char *ptr1, char *ptr2)
// {
//     strcpy(ptr2, ptr1);
// }

// int main()
// {
//     char str1[50] = "Hello World";
//     char str2[100];
    
//     copy(str1, str2);

//     printf("Original string: %s\n", str1);
//     printf("Copy string: %s", str2);
//     return 0;
// }

// Another method:-
// void Strcpy(char *src, char *tar)
// {
//     char *ptr = src;
//     while (*ptr != '\0')
//     {
//         *tar = *src;
//         printf("%s", tar);
//         src++;
//         ptr++;
//     }
    
// }

// int main()
// {
//     char source[30] = "Hello World! Whatsup?";
//     char target[100];
    
//     Strcpy(source, target);

//     return 0;
// }

/*
    Ques6. W.a.p to encrypt a string by adding 1 to the ASCII value of its characters.
*/
// int main()
// {
//     char str[100];
    
//     printf("Enter a string: ");
//     scanf("%s", str);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         char ch = str[i];
//         if (ch >= 'a' && ch <= 'z')
//         {
//             str[i] = ((ch - 'a' + 1) % 26) + 'a';
//         }
//         else if(ch >= 'A' && ch <= 'Z')
//         {
//             str[i] = ((ch - 'A' + 1) % 26) + 'A';
//         }
//     }

//     printf("Encrypted string: %s", str);
    
//     return 0;
// }

// Another method:-
// void encrypt(char *ptr)
// {
//     while (*ptr != '\0')
//     {
//         *ptr = *ptr + 1;
//         ptr++;
//     }
    
// }

// int main()
// {
//     char str[100] = "Hello world This is me Lakshaya!!";

//     encrypt(str);

//     printf("Encrypted String: %s", str);
//     return 0;
// }

/*
    Ques7. W.a.p to decrypt the string encrypted using encrypt function in problem 6.
*/
// void decrypt(char s[])
// {
//     for (int i = 0; s[i] != '\0'; i++)
//     {
//         char ch = s[i];
//         if (ch >= 'a' && ch <= 'z')
//         {
//             s[i] = ((ch - 'a' - 1 + 26) % 26) + 'a';
//         }
//         else if(ch >= 'A' && ch <= 'Z')
//         {
//             s[i] = ((ch - 'A' - 1 + 26) % 26) + 'A';
//         }
//     }
// }

// int main()
// {
//     char str[100];
    
//     printf("Enter a string: ");
//     scanf("%s", str);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         char ch = str[i];
//         if (ch >= 'a' && ch <= 'z')
//         {
//             str[i] = ((ch - 'a' + 1) % 26) + 'a';
//         }
//         else if(ch >= 'A' && ch <= 'Z')
//         {
//             str[i] = ((ch - 'A' + 1) % 26) + 'A';
//         }
//     }

//     printf("Encrypted string: %s\n", str);
    
//     decrypt(str);
    
//     printf("Decrypted string: %s\n", str);
    
//     return 0;
// }

// Another method:-
// void decrypt(char *ptr)
// {
//     while (*ptr != '\0')
//     {
//         *ptr = *ptr - 1;
//         ptr++;
//     }
    
// }

// int main()
// {
//     char str[100] = "Ifmmp!xpsme!Uijt!jt!nf!Mbltibzb";

//     decrypt(str);

//     printf("Decrypted String: %s", str);
//     return 0;
// }

/*
    Ques8. W.a.p to count the occurence of a given character in a string.
*/
// int main()
// {
//     char str1[50];
//     char str2[50];
//     char *ptr = str2;
//     int count = 0;
    
//     printf("Enter a string: ");
//     scanf("%s", str1);
//     printf("Enter the character: ");
//     scanf("%s", ptr);

//     for (int i = 0; str1[i] != '\0'; i++)
//     {
//         if (str1[i] == *ptr)
//         {
//             count++;
//         }
//     }
    
//     printf("%d\n", count);
//     printf("Occurence of the character %s is %d times", ptr,count);
    
//     return 0;
// }

/*
    Ques9. W.a.p to check whether a given character is present in a string or not.
*/
// int main()
// {
//     char str[50];
//     char *ptr = str;
//     int flag = 0;
    
//     printf("Enter a string: ");
//     scanf("%s", str);
//     printf("Enter the character: ");
//     scanf("%s", ptr);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == *ptr)
//         {
//             flag = 1;
//             break;
//         }
//     }
    
//     if (flag)
//     {
//         printf("Character found succesfully!!");
//     }
//     else
//     {
//         printf("Character not found");
//     }
    
//     return 0;
// }

/*
    Ques10. W.a.p to find whether a string is palindrome or not?
*/
// int main()
// {
//     char str[10],flag=0;
    
//     printf("Enter a string: ");
//     scanf("%s", str);
    
//     int beg = 0;
//     int back = strlen(str) - 1;
    
//     while (beg < back)
//     {
//         if (str[beg] == str[back])
//         {
//             flag = 1;
//         }
//         else
//         {
//             flag = 0;
//         }
//         beg++;
//         back--;
//     }
//     if (flag == 1)
//     {
//         printf("%s text is a palindrome", str);
//     }
//     else
//     {
//         printf("%s text is not a palindrome", str);
//     }
    
    
//     return 0;
// }