#include <stdio.h>

void f(int *a)
{
    printf("The value of the pointer a is: %p\n", a);
    return;
}

int main()
{
    int t[5];
    int *p;

    p = t;


    t[0] = 98;
    t[1] = 198;
    t[2] = 298;
    t[3] = 398;
    t[4] = 498;

    for (int i = 0; i < 5; i++)
    {
        printf("The value of t[%d] is %d and its address is %p\n", i, t[i], &t[i]);
    }
    printf("\nThe value of pointer p is: %p\n", p);
    f(t);

    printf("the size of array t is: %p\n", &*p + 1);

}