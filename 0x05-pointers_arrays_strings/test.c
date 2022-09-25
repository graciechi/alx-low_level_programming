#include <stdio.h>

int main()
{
    int v;  // v is a random variable of type int
    int *p; //initializing p. 'p' is a pointer to an integer, therefore after deferencing, *p is an integer

    v = 73; //assigning the integer 73 to variable v
    p = &v; //'&' takes the address of variable v and assigns it to pointer p.

    //therefore pointer p == &v address also integer *p == v variable
    // you use %p to print the value of a pointer p
    // you use *p to print the address of a variable &v
    // you use %d to print the value of a variable v

    // trying other data types
    char c;
    char *ch;

    c = 'H';
    ch = &c;

    printf("Address of variable *p is : %p\n", &p);
    printf("Address of variable v is : %p\n\n", &v);

    printf("value of v : %d\n", v);
    printf("value of p : %p\n\n", p);

    *p = 300029; // dereferencing a pointer

    printf("value of v : %d\n\n", v);

    printf("address of variable c is : %p\n", &c);
    printf("address of variable *ch is : %p\n\n", &ch);

    printf("value of c : %c\n", c);
    printf("value of ch : %p\n\n", ch);

    *ch = 't';

    printf("now the value of c : %c\n\n", c);

    return 0;
}