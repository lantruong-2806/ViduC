#include<stdio.h>
#include<Windows.h>
//PHANDLE read_pipe;
//PHANDLE write_pipe;// kieu du lieu void **
HANDLE read_pipe;
HANDLE write_pipe;// kieu du lieu void **

WINAPI function(LPVOID doiso) {
	int cnt = 0;
	int read = 0;
	while (1) {
		ReadFile(read_pipe, &cnt, sizeof(cnt), &read, NULL);
		printf("xinchao: %d\r\n", cnt);
		Sleep(1500);
	}
	return NULL;
}


void main() {

	int cnt = 0;
	HANDLE function_th =  CreateThread(NULL, 32, function, NULL, NULL, NULL);

	CreatePipe(&read_pipe, &write_pipe, NULL, 32);// can 2 bien int cnt nen co 8 byte
	while (1) {
		++cnt;
		int writeten = 0;
		WriteFile(write_pipe, &cnt, sizeof(cnt), &writeten, NULL);
		//kiem tra written = sizeof(cnt)
		printf("hello\r\n");
		Sleep(1000);
	}
}