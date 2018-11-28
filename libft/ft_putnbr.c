#include "./inc/libft.h"

void        ft_putnbr(int i)
{
    if (i < 0)
    {
        ft_putchar('-');
        i = -i;
    }
    if (i > 9)
    {
        ft_putnbr(i % 10);
        ft_putnbr(i / 10);
    }
    else
        ft_putchar(i + 48);
}