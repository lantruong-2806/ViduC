#include<stdio.h>
#include<math.h>
int a, b, c;
float x, y, delta;
void main(){
	printf("nhap a: ");
	scanf_s("%d", &a);
	printf("nhap b: ");
	scanf_s("%d", &b);
	printf("nhap c: ");
	scanf_s("%d", &c);
	delta = (b * b) - (float)( 4 * a * c);
	if (delta > 0) {
		x = (float)(-b + sqrt(delta) / 2 * a);
		y = (float)(-b - sqrt(delta) / 2 * a);
		printf("pt co 2 nghiem\r\n");
		printf("x = %.2f\r\n",x);
		printf("y = %.2f\r\n",y);
	}
	else if (delta == 0) {
		printf("pt co nghiem kep \r\n");
		printf("x = y = %.2f\r\n", (float)(-b / 2 * a));
	}
	else 
		printf("pt vo nghiem\r\n");
}