#include <stdio.h>

void modif_my_char(char *cc, char ccc)
{
    printf("The value of ccc is: %c\n", ccc);
    printf("The address of ccc is: %p\n", &ccc);
    printf("The value of *cc is: %p\n", cc);
    printf("The address of cc is: %p\n", &cc);
    *cc = 'o';
    ccc = '1';
}
int main()
{
    char c;
    char *p;

    p = &c;
    c = 'H';
    
    printf("The value of pointer p before dereferencing is: %p and the value of the address it contains is: %c\n", p, c);
    modif_my_char(p, c);
    printf("The value of pointer p after dereferencing is: %p and the value of the address it contains is: %c\n", p, c);

}