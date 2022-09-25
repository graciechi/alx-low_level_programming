#include <stdio.h>

void modif_my_param(int *m)
{
    printf("Value of 'm' : %p\n", m);
    printf("Address of 'm' : %p\n", &m);
    *m = 402;
}
int main()
{
    int n;
    int *p;

    p = &n;
    n = 98;

    printf("Value of 'n' before the call: %d\n", n);
    printf("Address of 'n': %p\n", &n);
    printf("Value of 'p': %p\n", p);
    printf("Address of 'p': %p\n\n", &p);

    modif_my_param(p);
    printf("Value of 'n' after the call: %d\n", n);

    /**
     * CODE EXPLANATION
     * we initialized variable n and gave its value as 98
     * then we got the address of n and initalized it as the value of pointer p
     * basically making the value of pointer p the address of variable n
     * then we called the function modif_my_param and inserted the value of pointer p as the value of anoter pointer m
     * so now, pointer m value is == pointer p value
     * so we can dereference pointer m value which contains address n which contains its own values of 98
     * so we can change those values by tweaking the address values using *m = 402
     * */
    return 0;


}