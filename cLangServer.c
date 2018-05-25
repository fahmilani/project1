#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

#define PORT 8080
void main ()
{

	int sockfd;
	struct sockaddr_in serverAddr;
		
	int newSocket;
	struct sockaddr_in newAddr;

	sockfd=socket (PF_INET,SOCK_STREAM,0);
	socklet_t addr_size;
	char buffer [1024];

	printf("[+] Server Socket Created successfully \n");
	memset(&serverAddr,'\0',sizeof(serverAddr));

	serverAddr.sin_family=AF_INET;
	serverAddr.sin_port=htons(PORT);
	serverAddr.sin_addr.s_addr= inet_addr("192.168.17.131");

	bind(sockfd,(struct sockaddr*) & serverAddr,sizeof(serverAddr));
	printf("[+] Listening... \n);
	addr_size = sizeof(newAddr);

	newSocket=accept (sockfd,(struct sockaddr*)&newAddr , &addr_seize);

	strcpy(buffer,"hello");
	send (newSocket,buffer,strlen(buffer),0);
	
	prinf("waalaikumusalam");
	else
	printf("are you a muslim?");
}
