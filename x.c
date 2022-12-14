
//               Fill 4 x 4 MATRIX

/*  Random Number Generation formula    */
/*  Xn + 1 = ((a*seed) + c)mod m */

#include<stdlib.h>

void createMatrix(int arr[][4])
{
    int n = 15;

    int num[n], i, j;

    for (i = 0; i < 15; i++) // These 1-15 number will be in th matrix
    {
        num[i] = i + 1;
    }

    srand(time(NULL)); // for random number generation

    int lastIndex = n = 1, index;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (lastIndex >= 0)

                index = rand() % (lastIndex + 1); // idea: performing operation by (1astIndex+1)

            arr[i][j] = num[index]; // will give index, so put that num[Index] number in matrix

            num[index] = num[lastIndex--]; // and replace last number with this indexed positioned number
        }                                  // and finally lastIndex--
    }

    arr[i - 1][j - 1] = 0; // last number is zero
}