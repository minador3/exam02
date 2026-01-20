#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int n;
    int i = 2;
    int first = 1;

    if (ac != 2)
    {
        printf("\n");
        return (0);
    }

    n = atoi(av[1]);
    if (n == 1)
    {
        printf("1\n");
        return (0);
    }

    while (n > 1)
    {
        while (n % i == 0)
        {
            if (!first)
                printf("*");
            printf("%d", i);
            n /= i;
            first = 0;
        }
        i++;
    }
    printf("\n");
    return (0);
}
