#include<stdio.h>
#pragma pack(1) /*set alignment to 1 byte boundary*/
typedef struct  {
	int tu;
	int mau;
}phan_so_typedef;
//viet ham rut gon
/*enum*/
phan_so_typedef C;
typedef enum loai_enum {
	gioi = 0,
	kha,
	trungBinh,
	yeu
}loai_t;
/**********/
phan_so_typedef nhan_phan_so(phan_so_typedef A, phan_so_typedef B) {
	phan_so_typedef ket_qua = { 0 };
	ket_qua.tu = A.tu * B.tu;
	ket_qua.mau = A.mau * B.mau;
	return ket_qua;
}
void main() {
	phan_so_typedef A = { 1,2 };
	phan_so_typedef B = { 2,2 };
    C = nhan_phan_so(A, B);
	
	phan_so_typedef  x = { 0 };// sizeof(x) = 8byte
	phan_so_typedef  arr[] = { 0 };
	/*enum*/
//	enum loai_enum x = gioi;
	loai_t y = kha;
}

