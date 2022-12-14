/* How to get scan code */

#include <stdio.h>

int readEnrtredKey()
{
    char c;
    c = _getch();
    if (c == -31)
    {
        c = _getch();
    }
    return c;
}

int main()
{
    while (1)
    {
        int key = readEnrtredKey();
        printf("Key entered is %d\n", key);
    }
    return 0;
}