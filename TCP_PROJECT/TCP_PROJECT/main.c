#include <stdio.h>
#include "Socket.h"
char buff_re[1024] ;
void main() {
	Socket_Client_Init("192.168.1.14", 23);
	Send("hello from DRM\r\n");
	Recv(buff_re, sizeof(buff_re));
	printf("data from server %s\r\n", buff_re);
}