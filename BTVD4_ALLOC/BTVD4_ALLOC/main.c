#include<stdio.h>
#include<malloc.h>
#include<string.h>
void main() {
	char arr[10];// bao warning do bien dc tao trong stack
	char *px = (char*) calloc(10, 1);// tao ra 10x1 (byte)
	char* py = (char*)malloc(10);// ep kieu char doi voi kieu void de tranh warning
	free(px);
	free(py);
	/*ham memcpy */
	char *str = "hello";
	memcpy(arr, str, 3);
		//dst distant ; diem den
		//source: nguon
		//size: 
	memset(arr, 0, 2);
}