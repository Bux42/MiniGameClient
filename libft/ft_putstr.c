#include "./inc/libft.h"

void        ft_putstr(char *str)
{
    write(1, str, strlen(str));
}