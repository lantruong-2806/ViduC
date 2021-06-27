#include "uart.h"
int main(void)
{

	USART2_Init();
	test_setup();
	printf("Hello there from main function");
    /* Loop forever */
	for(;;);
}
