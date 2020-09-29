/**
 * 1. 编写一个程序，要求用户输入一个两位数，然后按数位的逆序打印出这个数。程序会话应类似下面这样：
 *
 *    Enter a two-digit number: 28
 *    The reversal is: 82 
 *    
 *    用%d读入两位数，然后分解成两个数字。提示：如果n是整数，那么n % 10是个位数，而n / 10则是移除个位数后剩下的数。
 */

#include <stdio.h>

int main(void)
{
    int number;

    printf("\nEnter a two-digit number: ");
    scanf("%2d", &number);

    number = (number / 10) + (number % 10) * 10;

    printf("The reversal is: %d", number);

    return 0;
}
