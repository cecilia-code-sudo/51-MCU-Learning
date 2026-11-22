#include <REGX52.H>
#include "LCD1602.h"//lcd不区分大小写

void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"zyh");
	LCD_ShowString(1,5,"love");//字符串用双引号,column输入的是开始显示的列
	LCD_ShowString(1,10,"yym");
	while(1)
	{
		
	}
		
}