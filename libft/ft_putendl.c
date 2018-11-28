#include "./inc/libft.h"

void        ft_putendl(char *str)
{
    write(1, str, strlen(str));
    write(1, "\n", 1);
}