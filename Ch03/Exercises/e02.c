/**
 * 2. 编写printf函数调用，以下列格式显示float型变量x：
 *   (a) 指数表示形式，字段宽度8，左对齐，小数点后保留1位数字。
 *   (b) 指数表示形式，字段宽度10，右对齐，小数点后保留6位数字。
 *   (c) 定点十进制表示形式，字段宽度8，左对齐，小数点后保留3位数字。
 *   (d) 定点十进制表示形式，字段宽度6，右对齐，小数点后无数字。
 */

#include <stdio.h>

int main(void)
{
    float x;

    printf("\nPlease enter a value: ");
    scanf("%f", &x);

    printf("(a) |%-8.1e|\n", x);
    printf("(b) |%10.6e|\n", x);
    printf("(c) |%-8.3f|\n", x);
    printf("(d) |%6.0f|\n", x);

    return 0;
}