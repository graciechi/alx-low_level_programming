#include <stdio.h>

int main()
{
    int a[5];
    int *p;
    int *p2;

    *a = 98;
    p = a + 1;
    *p = 649;
    p2 = a + 2;
    *p2 = *p + 2000;
    for (int i = 0; i < 6; i++)
    {
        printf("array a has: %d\n", a[i]);
    }
}