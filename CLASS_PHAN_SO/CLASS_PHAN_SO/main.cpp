#include<stdio.h>
#include<malloc.h>

//xay dựng class phân số
class phanso_t {
public:
	//thuoc tinh tu mau
	int tu;
	int mau;

	//phương thức nhân
	phanso_t() {

	}
	phanso_t(int tu, int mau) {
		this->tu = tu;
		this->mau = mau;
	}

	phanso_t nhan(phanso_t a) {
		phanso_t ketqua;
		ketqua.tu = this->tu * a.tu;
		ketqua.mau = this->mau * a.mau;
		return ketqua;
	}
	// choồng toán tử
	phanso_t operator * (phanso_t A) {
		phanso_t ketqua;
		ketqua.tu = this->tu * A.tu;
		ketqua.mau = this->mau * A.mau;
		return ketqua;
	}
	// phep cong
	phanso_t operator + (phanso_t X) {
		phanso_t ketqua;
		ketqua.tu = (this->tu * X.mau) + (this->mau * tu); 
		ketqua.mau = this->mau * X.mau;
		return ketqua;
	}
	// phep tru
	phanso_t operator - (phanso_t A) {
		phanso_t ketqua;
		ketqua.tu = (this->tu * A.mau) - (this->mau * tu);
		ketqua.mau = this->mau * A.mau;
		return ketqua;
	}
	//phep chia 
	phanso_t operator / (phanso_t A) {
		phanso_t ketqua;
		ketqua.tu = (this->tu * A.mau);
		ketqua.mau = this->mau * A.tu;
		return ketqua;
	}
};
int main() {
	phanso_t A(1, 2);
	phanso_t B(3, 4);
	// cách bình thường 
	//phanso_t C = A.nhan(B);
	phanso_t C;
	// nhan toan tư
	C = B * A;
	// cong toan tu
	C = B + A;
	C = B - A;
	C = B / A;
	return 0;
	
}
