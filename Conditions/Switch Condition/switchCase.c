//___________Switch case_________

#include <stdio.h>
int main()
{
    int rating;

    printf("_________Do remember to enter rating in between (1-5)________\n\n");
    printf("Enter your rating: ");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("Your rating is 1");
        break;
    case 2:
        printf("Your rating is 2");
        break;
    case 3:
        printf("Your rating is 3");
        break;
    case 4:
        printf("Your rating is 4");
        break;
    case 5:
        printf("Your rating is 5");
        break;
    
    default:
        printf("Invalid rating"); 
        break;
    }
}

//__________Nested Switch________

#include <stdio.h>
int main()
{   
    int cat = 1, options = 2;
    int cat, options;

    printf("_____Our Categories____\n\n");
    printf("Category list:-\n");
    printf("Category 1. Men's Wear\n");
    printf("Options list:-\n");
    printf("Options 1. TShirts\n");
    printf("Options 2. Sunglasses\n");
    printf("Options 3. Shorts\n\n");
    printf("Category 2. Kid's Wear\n");
    printf("Options yet to come\n\n");

    printf("Choose the category: ");
    scanf("%d", &cat);
    
    printf("Choose the option: ");
    scanf("%d", &options);

    switch (cat)
    {
    case 1:
        printf("Category 1 ---> Men's wear\n"); 
        switch (options)
        {
            case 1:
                printf("Option 1 --> TShirts\n");
                break;
            
            case 2:
                printf("Option 2 --> Sunglasses\n");
                break;
            
            case 3:
                printf("Option 2 --> Shorts\n");
                break;
            
            default:
                printf("This search is not in our option. Try again !!\n");
                break;
        }
        break;
    case 2:
        printf("Category 2 ---> Kid's wear\n"); 
        break;
    
    default:
        printf("More Categories are yet to come...\n"); 
        break;
    }
}