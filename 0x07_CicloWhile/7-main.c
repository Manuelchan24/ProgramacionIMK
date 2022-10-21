#include <stdio.h>

int main()
{
    char alfabeto = 'a';

    printf("Alfebeto de a - z es:\n");
    while(alfabeto <='z')
    {
        printf("%c\n", alfabeto);
        alfabeto++;
    }

    return 0;
}