#include "../inc/header.h"

t_settings  get_settings(char **argv)
{
    t_settings  ret;
    int         i;

    i = 0;
    ret.port = 8888;
    ret.ip = strdup("127.0.0.1");
    while (argv[++i])
        ft_putendl(argv[i]);
    return (ret);
}

int         main(int argc, char **argv)
{
    t_settings settings;

    argc++;
    settings = get_settings(argv);
    ft_putnbr(settings.port);
    ft_putendl(settings.ip);
    start_client(settings);
    return(0);
}