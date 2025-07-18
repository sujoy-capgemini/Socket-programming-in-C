#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080

int main() {
    //Code
    int server_socket,client_socket;
    struct sockaddr_in server_addr,client_addr;
    socklen_t addr_size;
    char messageBuffer[1024]={0};

    server_socket=socket(AF_INET,SOCK_STREAM,0);
    if(server_socket==-1){
        printf("Socket connection faild\n");
        return 1;
    }

    server_addr.sin_family=AF_INET;
    server_addr.sin_addr.s_addr=INADDR_ANY;
    server_addr.sin_port=htons(PORT);

    if(bind(server_socket,(struct sockaddr*)&server_addr,sizeof(server_addr))==-1){
        printf("Bind failed\n");
        return 1;
    }
    if(listen(server_socket,5)==-1){
        printf("Listing faild\n");
        return 1;
    }
    printf("server listening on Port %d \n",PORT);
    
    return 0;
}