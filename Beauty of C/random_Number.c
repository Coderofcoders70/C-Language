#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;  
    srand(time(0)); // On every click it will generate a new random number or else 
    // By default it will generate 41. 
    num = rand() % 100;
    printf("Random number: %d", num);
    
}