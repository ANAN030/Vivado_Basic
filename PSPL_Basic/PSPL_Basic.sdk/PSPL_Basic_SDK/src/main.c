#include <stdio.h>
#include <stdlib.h>
#include "xparameters.h"		// 參數集.
#include "xgpio.h"	// 簡化PS對PL的GPIO操作的函數庫.

// 延遲用.
void delay(int dly)
{
    int i, j;
    for (i = 0; i < dly; i++) {
    	for (j = 0; j < 0xffff; j++) {
    		;
        }
    }
}

// 主程式.
int main()
{
    XGpio LED_XGpio;		// 宣告一個GPIO用的結構.
    int LED_num = 0b11000011;	// 宣告一個變數,做運算用暫存用.

    XGpio_Initialize(&LED_XGpio, XPAR_AXI_GPIO_0_DEVICE_ID);	// 初始化LED_XGpio.
    XGpio_SetDataDirection(&LED_XGpio, 1, 0);		// 設置通道.

    printf("Start!!!");

    while(1) {
    	printf("LED_num = 0x%x\n", LED_num);

    	XGpio_DiscreteWrite(&LED_XGpio, 1, LED_num);		// LED_XGpio通道,送LED_num值進去.

    	LED_num = ~LED_num;		// LED_num變數反相.

    	delay(1000);
    }

    return 0;
}
