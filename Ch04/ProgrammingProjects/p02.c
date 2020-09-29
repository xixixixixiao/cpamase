/**
 * 2. 扩展上题中的程序使其可以处理3位数。
 */

#include <stdio.h>

int main(void)
{
    int number;

    printf("\nEnter a two-digit number: ");
    scanf("%3d", &number);

    number = (number / 100) + (number % 100) / 10 * 10 + (number % 10) * 100;

    printf("The reversal is: %d", number);

    return 0;
}
