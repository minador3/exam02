int	max(int *tab, unsigned int len)
{
    unsigned int i;
    int max_value;

    if (len == 0)
        return (0);
    i = 1;
    max_value = tab[0];
    while (tab[i])
    {
        if (tab[i] > max_value)
            max_value = tab[i];
        i++;
    }
    return (max_value);
}
