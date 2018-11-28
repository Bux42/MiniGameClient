#ifndef HEADER_H

#define HEADER_H
# include "../libft/inc/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <sys/socket.h>
# include <arpa/inet.h>

typedef struct          s_settings
{
    char                *ip;
    int                 port;
}                       t_settings;

t_settings              get_settings(char **argv);
void                    start_client(t_settings settings);

#endif