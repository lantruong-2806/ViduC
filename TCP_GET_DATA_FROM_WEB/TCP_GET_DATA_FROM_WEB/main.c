#include <stdio.h>
#include "Socket.h"
#include "string.h"
char buff_recieve[15536] ;

void main() {
	Socket_Client_Init("54.192.22.61", 80);
	Send("GET /v1/bpi/currentprice.json HTTP/1.1\r\nHost: api.coindesk.com\r\n\r\n");
	Recv(buff_recieve, sizeof(buff_recieve));
	//printf("[data from server %s\r\n]", buff_re);
	char * key_Start = "\"rate_float\":";
	char key_End = '}';
	char *buff = 0;
	char * start_Pos = strstr(buff_recieve, key_Start);// con trỏ trỏ tới vị trí đầu tiên ["]của chuỗi "rate_float":
	//để nhảy tới vị trí của 35475.6944, tăng con trỏ = độ dài chuỗi keyStart.
	start_Pos += strlen(key_Start);
	// get giá trị 35475.6944
	int index = 0;
	char getValue[50] = {0};
	while (start_Pos[index] != key_End) {
		getValue[index] = start_Pos[index];
		index++;
	}
	printf("bitcoin price: %s USD", getValue);
}
