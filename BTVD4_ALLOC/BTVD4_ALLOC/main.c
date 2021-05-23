#include<stdio.h>
#include<malloc.h>
#include<string.h>
// buoc 1: xay dung struct
// phan_so_s: mieu ta doi tung Phan So
struct phan_so_s {
	int tu;
	int mau;
};
typedef struct phan_so_1 {
	int tu;
	int mau;
}phan_so_t;
typedef int so_nguye_4byte;

void main() {
	/*vd struc*/
	int x = 0;
	so_nguye_4byte y = 0;
	// buoc 2 khai bao
	struct phan_so_s A = { 0,0 };// hoac ===> struct phan_so_s A = { 0 }; => tat ca cac ptu trong struct deu la 0
	struct phan_so_s B = { 0,0 };
	phan_so_t Z = { 0 };
    //su dung
	A.tu = 1;
	A.mau = 2;

	B.tu = 2;
	B.mau = 3;
	//read 
	int x = A.tu;
	printf("%d/%d\r\n", A.tu, A.mau);
	struct phan_so_s * C = &A;
	
	printf("%d/%d\r\n",C->mau,C->tu);


	/************/
	
	
	
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