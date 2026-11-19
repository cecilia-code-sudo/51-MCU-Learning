### 4-2 动态数码管显示
**目标**:数码管的消影----位选 段选 清零 位选 段暄···
## bug修复
1.显示main.c(34): warning C206: 'Delay': missing function-prototype
-使用软件延时器，输入void Delay（）时一定要注意函数名一致，void后是Delay，则下面调用函数也写Delay(),如果是Delay1ms，则一定要写全是Delay1ms（）
