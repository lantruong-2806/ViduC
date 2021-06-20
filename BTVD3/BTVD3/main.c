#include<stdio.h>
/*ham ko the truyen doi so nhu la 1 ham khac*/
float f(float x) {
	return x * x;
}
float g(float x) {
	return x * x * x;
}
//double s_calc(float a, float b) { // ban goc ko co con tro ham
double tich_phan(float a, float b, float (*fx)(float)) {
	double s = 0.0;
	float h = (b - a) / 1000.0;
	for (float i = a; i < b - h; i += h) {
		float day_lon = fx(i);
		float day_be = fx(i + h);
		s += ((day_be + day_lon) / 2)*h;

	}
	return s;

}
void main() {
	tich_phan(1, 2, f);// f => dia chi cua ham f. float (*fx)(float) day la doi so kieu con tro
	tich_phan(1, 2, g);// g(x) = x^3 se la dia chi cua ham g duoc truyen vao
}



//int cong(int x, int y) {
//	return x + y;
//
//}
//void main() {
//	printf("%d\r\n", cong);// in ra did chi cua ham/ ki thuat trong nhung khi chay chuong trinh tren Ram, flash hoac rom
//	int(*function_pointer)(int, int) = 0;//khai bao con tro ham
//	function0_pointer = cong;//gan dia chi ham cong cho con tro ham
//	printf("%d\r\n", function_pointer(1, 2)); // tinh toan
//
//
//}