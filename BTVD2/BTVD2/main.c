#include <stdio.h>
#include<stdint.h>
uint16_t value = 0xABCD;
void main(void) {
	uint8_t bitLow = 0, bitHigh = 0;
	bitLow = (uint8_t)value;        //bitLow => 0xCD
	bitHigh = (uint8_t)(value >> 8);//bitHigh => 0xAB
	/*******************************************/
	unsigned int GPIO_CRH = 0;//0b0000000000000000
	GPIO_CRH &= ~(0b1111);//GPIO_CRH = GPIO_CRH & ~(0b1111);//GPIO_CRH = GPIO_CRH & 0xFFFFFFF0;// clear 4 bit cuoi ==== i+=1 <=> i = i+1
	GPIO_CRH |= 0b0010; //GPIO_CRH = GPIO_CRH | 0b0010; //set 4 bit cuoi
	// set 4 bit tu 4-7 ma ko lam mat cac bit khac
	GPIO_CRH &= ~(0b1111 << 4);//GPIO_CRH = GPIO_CRH & ~(0b1111);//GPIO_CRH = GPIO_CRH & 0xFFFFFFF0;// reset bit to 0
	GPIO_CRH |= 0b0010 << 4; //GPIO_CRH = GPIO_CRH | 0b0010; //set bit to 1
}