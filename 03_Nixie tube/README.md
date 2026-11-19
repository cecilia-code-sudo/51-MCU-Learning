### 4-1 静态数码管显示
## 原理
- 数码管的引脚定义：
<img width="1182" height="682" alt="image" src="https://github.com/user-attachments/assets/426c581a-9f2b-4977-94c5-928939a97937" />
（注意小箭头方向 右上为共阴极 接地，右下为共阳极，接vcc）
共阴极：位选给低电平(0)选中，段选给高电平(1)点亮。
共阳极：位选给高电平(1)选中，段选给低电平(0)点亮。
- C51数组
<img width="1228" height="636" alt="image" src="https://github.com/user-attachments/assets/99db4ae2-5bb5-4fff-a524-272a427c8aff" />
**一定要注意数组越界情况，因为计算机不报错**
- C51子函数
<img width="1206" height="718" alt="image" src="https://github.com/user-attachments/assets/d8d6f13f-9c71-49a0-a997-d0ee5b7afd52" />
138译码器结构图
（由高到低：CBA）
<img width="608" height="604" alt="image" src="https://github.com/user-attachments/assets/041c3b68-e428-47f5-b9b1-41302279aeee" />
数码管结构图
<img width="1034" height="454" alt="image" src="https://github.com/user-attachments/assets/34ddf978-6e98-4afd-ba52-7e56173b0cd2" />
（高位对高位，从下往上读）
数码管段码表
<img width="1140" height="466" alt="image" src="https://github.com/user-attachments/assets/c993f896-601f-4b01-b7d2-b7b255d6fe7f" />
