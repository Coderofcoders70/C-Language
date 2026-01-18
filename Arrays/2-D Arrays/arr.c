// ****************** 2-D ARRAYS OR TWO-DIMENSIONAL ARRAY***********
#include <stdio.h>
int main()
{
    int n1, n2;
    int arr[5][5];
    printf("Enter number of rows: ");
    scanf("%d", &n1);
    printf("Enter number of columns: ");
    scanf("%d", &n2);

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("Enter Product sr no: ");
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("Category %d has sub-category %d and its Product sr no is %d\n", i+1, j+1, arr[i][j]);
        }
    }
    
    return 0;
}