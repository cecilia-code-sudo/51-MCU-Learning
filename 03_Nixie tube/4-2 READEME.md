### 4-2 动态数码管显示
**目标**:数码管的消影----位选 段选 清零 位选 段暄···
## bug修复
1.显示main.c(34): warning C206: 'Delay': missing function-prototype
-使用软件延时器，输入void Delay（）时一定要注意函数名一致，void后是Delay，则下面调用函数也写Delay(),如果是Delay1ms，则一定要写全是Delay1ms（）
2.输入这个4-2-1main.c代码后我的单片机led显示5201314但是闪烁的特别快，极不稳定
