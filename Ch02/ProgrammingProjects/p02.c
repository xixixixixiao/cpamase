/**
 * 2. 编写一个计算球体体积的程序，其中球体半径为10 m，参考公式v = 4/3(pi)r^3。
 * 
 * 注意，分数4/3应写为4.0f/3.0f。（如果分数写成4/3会产生什么结果？） 
 * 提示： C语言没有指数运算符，所以需要对r自乘两次来计算r^3。
 */

#include <stdio.h>

#define PI 3.14159265358979323846 // pi
#define RADIUS 10

int main(void)
{
    float volume = (4.0f / 3.0f) * PI * (RADIUS * RADIUS * RADIUS);

    printf("The volume of a %d-meter sphere is: %.2f", RADIUS, volume);

    return 0;
}

/**
 * 如果分数写出 4/3 则计算结果是两个整型相除得到 1 而非 1.333... 将会降低精度.
 */
