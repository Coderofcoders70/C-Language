#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkPlayers(char py1, char py2)
{
    if (py1 == py2)
    {
        return 0;
    }

    if ((py1 == 'r' || py1 == 'R') && (py2 == 's' || py2 == 'S'))
    {
        return 1;
    }

    if ((py1 == 's' || py1 == 'S') && (py2 == 'p' || py2 == 'P'))
    {
        return 1;
    }

    if ((py1 == 'p' || py1 == 'P') && (py2 == 'r' || py2 == 'R'))
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int checkCompAndPlayer(char cp, char py)
{
    if (cp == py)
    {
        return 0;
    }

    if ((cp == 'r' || cp == 'R') && (py == 's' || py == 'S'))
    {
        return 1;
    }

    if ((cp == 's' || cp == 'S') && (py == 'p' || py == 'P'))
    {
        return 1;
    }

    if ((cp == 'p' || cp == 'P') && (py == 'r' || py == 'R'))
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int main()
{
    int num, cScore=0, plScore=0, score1=0, score2=0;
    char ch, comp;
    char pl1, pl2, player;

    printf("\n************ Ultimate Rock Paper Scissors Game *********\n");
    printf("******************** Let's see who wins *********************\n");
    printf("Rules to remember:-\n");
    printf("1. Type r or R --> Rock\n");
    printf("2. Type p or P --> Paper\n");
    printf("3. Type s or S --> Scissors\n");
    printf("3. Type x or X --> Exit\n\n");
    printf("Choose the mode in which you want to play:-\n\n");
    printf("A ---> Computer mode\n");
    printf("B ---> Multiplayer mode\n\n");
    printf("Enter here: ");
    scanf("%c", &ch);
    if (ch == 'b' || ch == 'B')
    {
        printf("Let's Start the game:-\n");
        while (1)
        {
            printf("\nPlayer 1 Score: %d\n", score1);
            printf("Player 2 Score: %d\n\n", score2);
            printf("Player 1: ");
            scanf(" %c", &pl1);
            if (pl1 == 'x' || pl1 == 'X') 
            {
                break;
            }
            printf("Player 2: ");
            scanf(" %c", &pl2);
            if (pl2 == 'x' || pl2 == 'X')
            {
                break;
            }
            int res = checkPlayers(pl1, pl2);  
            if (res == 1)
            {
                printf("Player 1 wins!!\n");
                score1 = score1 + 10;
            }
            else if(res == 2)
            {
                printf("Player 2 wins!!\n");
                score2 = score2 + 10;
            } 
            else
            {
                printf("Game Draw!!\n");
            }
        }
        if (score1 > score2)
        {
            printf("Congratulations Player 1 You WON!!");
        }
        else
        {
            printf("Congratulations Player 2 You WON!!");
        }
    }
    else if(ch == 'a' || ch == 'A')
    {
        printf("\nHEYY I am your COMPUTER BUDDY...\n"); 
        printf("Let's Start the game:-\n");
        while (1)
        {
            srand(time(0));
            num = rand() % 100;
        
            if (num >= 0 && num <= 25)
            {
                comp = (char)'s';
            }
            else if (num >= 26 && num <= 50)
            {
                comp = (char)'r';
            }
            else if (num >= 51 && num <= 100)
            {
                comp = (char)'p';
            }

            printf("\nComputer Score: %d\n", cScore);
            printf("Your Score: %d\n\n", plScore);
            printf("Your BUDDY has already chose\n");
            printf("Your turn: ");
            scanf(" %c", &player);
            if (player == 'x' || player == 'X')
            {
                break;
            }
            int res = checkCompAndPlayer(comp, player);  
            if (res == 1)
            {
                printf("Computer win!!\n");
                cScore = cScore + 10;
            }
            else if(res == 2)
            {
                printf("Player win!!\n");
                plScore = plScore + 10;
            } 
            else
            {
                printf("Game Draw!!\n");
            }
        }
        if (cScore > plScore)
        {
            printf("Congratulations Computer WON!!!");
        }
        else
        {
            printf("Congratulations You WON!!");
        }
    }
    
    return 0;
}