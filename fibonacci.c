#include <stdio.h>
#include <stdlib.h>

size_t f(size_t n);

int main(int argc, char *argv[])
{
    size_t number;
    
    if (argc != 2)
    {
        printf("Usage: %s <positive integer>\n", argv[0]);
        return (1);
    }

    number = atoi(argv[1]);
    if (number < 1)
    {
        printf("Please enter a positive integer greater than 0.\n");
        return (1);
    }

    printf("f(%zu) = %zu\n", number, f(number));
    return 0;
}

size_t f(size_t n)
{
    static size_t prev = 0;
    size_t retval;
    size_t aux;

    if (n == 1)
    {
        prev = 0;
        return 1;
    }
    aux = f(n - 1);
    retval = aux + prev;
    prev = aux;
    return retval;
}
