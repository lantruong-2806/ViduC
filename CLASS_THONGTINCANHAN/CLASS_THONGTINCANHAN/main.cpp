#include <stdio.h>
#include <string.h>
#include <stdint.h>


class ThongTinCaNhan {

public:
	char ten[20];
	uint8_t tuoi;
	enum Gioitinh_e {
		Nam,
		Nu,
		Khongxacdinh
	};
	Gioitinh_e gioiTinh;

};
class Hocsinh : public ThongTinCaNhan { // care full nen ghi ra public hoac privt
public:
	float diemToan;
	float diemVan;
	Hocsinh(const char *ten) {
		memcpy(this->ten, ten, strlen(ten));
		tuoi = 18;
		gioiTinh = Nam;
	}
	void Set_DToan(float diemToan);
	void Set_DVan(float diemVan);
	float Get_loai();

};
int main(void) {
	Hocsinh A("Truong Nham Lan");
	A.Set_DToan(10);
	A.Set_DVan(10);
	
	if (A.Get_loai() > 8.0) {
		printf("Gioi");
	}
	else if(A.Get_loai() > 6.5 && A.Get_loai() < 8.0) {
		printf("Kha");
	}
	else if (A.Get_loai() > 5 && A.Get_loai() < 6.5) {
		printf("TB");
	}

}
void Hocsinh::Set_DToan(float diemToan) {
	this->diemToan = diemToan;
}
void Hocsinh::Set_DVan(float diemVan) {
	this->diemVan = diemVan;
}
float Hocsinh::Get_loai() {
	float diemtb =(this->diemVan + this->diemToan) / 2;
	return diemtb;
}