// ___________if-else condition__________

#include <stdio.h>
int main()
{
    int age, vipPass = 11; // Optional Vip pass variable

    printf("Enter the age: ");
    scanf("%d", &age);

    if((age >= 18 && age <= 80) || vipPass == 15)
    {
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }
}