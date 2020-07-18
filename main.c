#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netdb.h>
#include<netinet/in.h>
#include<arpa/inet.h>


int main(int argc, char *argv[])
{
	
	struct hostent *host_info;
	struct in_addr *address;
	
	
	if(argc != 2){
		printf("Too few arguments\n");
		return(0);
	}
	
	char *hostname = argv[1];
	
	host_info = gethostbyname(hostname);
	address = (struct in_addr*)(host_info->h_addr);
	
	printf("%s has address : %s",hostname, inet_ntoa(*address));
	
	
	
}
