/**
 * 3. 重新编写编程题2中的程序，使新程序不需要利用算术分割就可以显示出3位数的逆序。
 * 提示：参考 4.1 节的 upc.c 程序。
 */

#include <stdio.h>

int main(void)
{
    int digit1, digit2, digit3;

    printf("\nEnter a three-digit number: ");
    scanf("%1d%1d%1d", &digit1, &digit2, &digit3);

    printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);

    return 0;
}