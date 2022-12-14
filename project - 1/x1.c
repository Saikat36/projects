
/* Random Number Generation */

// C program for generating a
// random number in a given range.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Generates and prints 'count' random
// numbers in range [lower, upper].
void printRandoms(int lower, int upper, int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
}

// Driver code
int main()
{
    int lower = 5, upper = 190, count = 1;

    // Use current time as
    // seed for random generator
    srand(time(0));

    printRandoms(lower, upper, count);

    return 0;
}

/* .................................... */

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int c, n;

//     printf("Ten random numbers in [1,100]\n");

//     for (c = 1; c <= 10; c++)
//     {
//         n = rand() % 100 + 1;
//         printf("%d\n", n);
//     }

//     return 0;
// }
