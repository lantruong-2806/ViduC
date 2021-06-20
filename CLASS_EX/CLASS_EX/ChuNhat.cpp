#include"ChuNhat.h"
int ChuNhat_c::Get_Dai() {
	return Dai;
}
void ChuNhat_c::Set_Dai(int bien_b) {
	Dai = bien_b;
}
int ChuNhat_c::ChuVi() {
	return 2 * (Dai + Rong);
}
int ChuNhat_c::Dientich() {
	return Dai * Rong;
}