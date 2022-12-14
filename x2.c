        /* Move numbers */

#include<stdio.h>

void move(int *x, int *y)
{
    *x = *x+*y;
    *y = *x-*y;
    *x = *x-*y;
}

int main()
{
    int a = 10,b = 20;
    printf("Before moving a = %d , b = %d\n",a,b);

    move(&a,&b);
    printf("\nAfter moving a = %d , b = %d\n\n",a,b);
    return 0;

}