#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int nbr1;
    int nbr2;
    char op;

    if (ac == 4)
    {
        nbr1 = atoi(av[1]);
        nbr2 = atoi(av[3]);
        op = av[2][0];

        if (op == '-')
            printf("%d\n", nbr1 - nbr2);
        else if (op == '+')
            printf("%d\n", nbr1 + nbr2);
        else if (op == '*')
            printf("%d\n", nbr1 * nbr2);
        else if (op == '/')
            printf("%d\n", nbr1 / nbr2);
        else if (op == '%')
            printf("%d\n", nbr1 % nbr2);
        else 
            printf("\n");
    }
    printf("\n");
    return (0);
}
