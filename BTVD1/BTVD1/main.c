#include<stdio.h>//thu vien he thong xai <>| thu vien ngoai xai ""
#include<stdint.h>
#include"myLib.h"
//uint16_t value = 0xabcd;

//unsigned char bien_toan_cuc=0;
//unsigned char x = 0;
//char x =1; value x = 1. &x = dia chi cua x

void main() {
	int z = cong(1, 2);
	/*uint8_t low = 0;
	uint8_t high = 0;
	low = (uint8_t)value;
	high = (uint8_t)(value >> 8);
	printf("value: %x, value low %x\r\n", value ,low);
	printf("value low: %x\r\n", low);
	printf("value high: %x\r\n", high);*/
	/*int y = 10;
	char x = 0;
	//x = y;
	x = (y > 10) ? 1 : 2;//bieu thuc rut gon
	/*
	unsigned char biencucbo = 7; //bien cuc bo nen khai bao gia tri.
	//bien_toan_cuc = 10 | 2;//kq la 2
	bien_toan_cuc = 10 << 2;//0000 1010 =>kq 0010 1000
	printf("Hello World!\r\n");//\r\n ky tu xuong dong
	printf("x value: %d\r\n", biencucbo);//%d se duoc thay bang giatri biencucbo
	printf("x address %d\r\n", &biencucbo);
	
	// set 4 bit 0-3 ma khong lam mat cac bit khac*/
	/*unsigned int GPIO_CRH = 0;
	GPIO_CRH &= ~(0b111);//GPIO_CRH = GPIO_CRH & ~(0b1111);//GPIO_CRH = GPIO_CRH & 0xFFFFFFF0;// clear 4 bit cuoi
	GPIO_CRH |= 0b0010; //GPIO_CRH = GPIO_CRH | 0b0010; //set 4 bit cuoi
	// set 4 bit tu 4-7 maf ko lam mat cac bit khac
	GPIO_CRH &= ~(0b111 << 4);//GPIO_CRH = GPIO_CRH & ~(0b1111);//GPIO_CRH = GPIO_CRH & 0xFFFFFFF0;// reset bit to 0
	GPIO_CRH |= 0b0010 << 4; //GPIO_CRH = GPIO_CRH | 0b0010; //set bit to 1
	x = ~10;// kq 245
	x = !10;// kq 0
	x = !0; // kq 1*/
}

// buitld chuong trinh CTR+F7| built + tao file exe F5
// file exe nam tai thu muc debug
// note: muon debug thi chay chuong trinh -> chay debug.
// xem gia tri duoc luu bang memmory va watch: Debug->windows->
// 10 / 3 = 3.000 neu hai so tu va mau deu la interger thi phep chia kq la interger. doi thanh 10.0 / 3 = 3.333
// phep chia lay du dung de kt chan le. 
// clear bit bang cach and voi 0xFFFFFFF0
// do uu tien toan tu. toan tu gan se uu tien cuoi cung. => vd thuc hien phep + roi moi gan vao bien
// ~ phep dao bit
// phep toan logic && ( va) || ( hoac) ! (phu dinh))
// bieu thuc dieu kien rut gon