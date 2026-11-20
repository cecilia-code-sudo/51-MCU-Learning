### 5-1 模块化编程
1.模块化编程
<img width="1900" height="1010" alt="image" src="https://github.com/user-attachments/assets/1c32121b-ba7c-479f-9455-f5f46223872a" />
2.模块化编程注意事项
<img width="1796" height="932" alt="image" src="https://github.com/user-attachments/assets/dcabe904-79be-40e0-8a5b-8dec44d3f4df" />
3.c预编译
<img width="1950" height="1064" alt="image" src="https://github.com/user-attachments/assets/02c5a224-3da0-427f-adb8-88702ee3b6f0" />
4.模块化编程框图
<img width="1898" height="1056" alt="image" src="https://github.com/user-attachments/assets/8c4d9823-44d6-4d1f-97e4-53eb83b18cee" />
## bug修复
-显示void main（）有错
代码开头出错要考虑是头文件结尾没有加分号
```c
#ifndef __Nixie_H__
#define __Nixie_H__
void Nixie(unsigned char Location,Number);//注意分号结尾
#endif __Nixie_H__
```
