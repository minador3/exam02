unsigned char	reverse_bits(unsigned char octet)
{
    int i;
    unsigned char res;

    i = 0;
    res = 0;
    while (i < 8)
    {
        res = (res << 1) | (octet & 1);
        octet = octet >> 1;
        i++;
    }
    return (res);
}
