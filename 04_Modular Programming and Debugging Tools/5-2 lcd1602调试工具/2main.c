#include <REGX52.H>
#include "LCD1602.h"//lcd不区分大小写
#include "Delay.h"

int Result=0;
void main()
{
	LCD_Init();

	while(1)
	{
		Result++；
		Delay(1000);
		LCD_ShowNum(1, 1, Result, 3);
	}
		
}