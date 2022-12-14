#include <stdio.h>

void showMatrix(int arr[][4])
{
    int i, j;
    printf("-------------------\n");
    for (int i = 0; i < 4; i++)
    {
        printf(" | ");
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j]!=0)
            {
                printf("  | ");
            }
            else{
                printf("  | ");
            }
        }
        printf("\n");
    }
    printf("-------------------\n");
}

int main()
{
    int arr[4][4];

    showMatrix(arr);

    return 0;
}