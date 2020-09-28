/**
 * 5. 编程要求用户输入x的值，然后显示如下多项式的值：
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 * 
 * 提示： C语言没有指数运算符，所以需要对x进行自乘来计算其幂。（例如， x*x*x就是x的三次方。）
 */

#include <stdio.h>

int main(void)
{
    int x;

    printf("\nThe following polynomial will be calculated:\n");
    printf("(3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6)\n\n");

    printf("Enter a number x: ");
    scanf("%d", &x);

    long result = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;

    printf("\nAnswer: %d\n\n", result);

    return 0;
}
