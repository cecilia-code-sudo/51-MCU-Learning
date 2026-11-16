# 02 独立按键控制LED
## 3-1 独立按键控制LED亮灭
- C51数据运算
- <img width="1304" height="674" alt="0146473d80d7baab357b29fb0e6dd052" src="https://github.com/user-attachments/assets/617d0a19-c35d-4147-95c2-b96b2e4cbf54" />
<img width="669" height="227" alt="6ff825ff0c83065c8fc3d8c54ecf7018" src="https://github.com/user-attachments/assets/4426cfaf-b372-4d66-8945-d3d3d6054e32" />
0011 1100<<1  ->  0111 1000
0011 1100>>2  ->  0000 1111
0001 1000&0010 1010  ->  0000 1000
0001 1000|0010 1010  ->  0011 1010 按位或：异1同不变
0001 1000^ 0010 1010 ->  0011 0010 按位异或：异1同0
~0001 1000  ->  1110 0111
- C51基本语句
- <img width="1514" height="915" alt="ff8e47687aa97fc7b2a69cce2e115972" src="https://github.com/user-attachments/assets/d3c488da-97da-411a-b6b9-de176d61a5f1" />
## 3-2 独立按键控制LED状态
**目标** 按键消抖，检测松手
-while循环体两种结束写法：
```c
while（）
{
}
```
或者
```c
while();
```
