#include "../inc/header.h"

void        start_client(t_settings settings)
{
    int                 sock;
    struct sockaddr_in  server;
    char                message[1000];
    char                server_reply[1000];

    sock = socket(AF_INET , SOCK_STREAM , 0);
    if (sock == -1)
    {
        printf("Could not create socket");
    }
    puts("Socket created");
     
    server.sin_addr.s_addr = inet_addr(settings.ip);
    server.sin_family = AF_INET;
    server.sin_port = htons(settings.port);
 
    //Connect to remote server
    if (connect(sock , (struct sockaddr *)&server , sizeof(server)) < 0)
    {
        perror("connect failed. Error");
        return ;
    }
     
    puts("Connected\n");
     
    //keep communicating with server
    while(1)
    {
        ft_putstr("Enter message: ");
        scanf("%s" , message);
         
        //Send some data
        if( send(sock , message , strlen(message) , 0) < 0)
        {
            puts("Send failed");
            return ;
        }
         
        //Receive a reply from the server
        if( recv(sock , server_reply , 2000 , 0) < 0)
        {
            puts("recv failed");
            break;
        }
         
        puts("Server reply :");
        puts(server_reply);
    }
     
    close(sock);
    return ;
}