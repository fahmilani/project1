#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#define PORT 8080

void main(){
int clientSocket;
char buffer [1024];
struct sockaddr_in serverAddr;

clientSocket =socket (PF_INET,SOCK_STREAM,0);
printf("[+]Client Socket Created Successfully \n");
memset(&serverAddr, '\0'msiezeof (serverAddr));
serverAddr.sin_family=AF_INET;
serverAddr.sin_port=htons(PORT);
serverAddr.sin_addr.s_addr=inet_addr("192.168.17.130");

connect (clientSocket,(struct sockaddr*)
&serverAddr,sizeof(serverAddr));
printf("[+]Connected to server \n");

recv(clientSocket,buffer,1024,0);
printf("[+] Data receive :%s\n",buffer);


}
