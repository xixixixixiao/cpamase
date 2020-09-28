/**
 * 7. 编写一个程序，要求用户输入一个美金数量，然后显示出如何用最少的20美元、 10美元、 5美元和1美元来付款：
 * 
 * Enter a dollar amount: 93
 * 
 * $20 bills: 4
 * $10 bills: 1
 *  $5 bills: 0
 *  $1 bills: 3
 * 
 * 提示：将付款金额除以20，确定20美元的数量，然后从付款金额中减去20美元的总金额。
 * 对其他面值的钞票重复这一操作。确保在程序中始终使用整数值，不要用浮点数。
 */

#include <stdio.h>

int main(void)
{
    int dollars = 93, twenties, tens, fives;

    printf("\nEnter a dollar amount: ");
    // scanf("%d", &dollars);

    twenties = dollars / 20;
    dollars = dollars - twenties * 20;
    tens = dollars / 10;
    dollars = dollars - tens * 10;
    fives = dollars / 5;
    dollars = dollars - (fives * 5);

    printf("\n$20 bills: %d", twenties);
    printf("\n$10 bills: %d", tens);
    printf("\n $5 bills: %d", fives);
    printf("\n $1 bills: %d\n\n", dollars);

    return 0;
}