/**
 * 6. 修改上题，用如下公式对多项式求值：
 * ((((3x + 2) x - 5)x - 1)x + 7)x - 6
 * 
 * 注意，修改后的程序所需的乘法次数减少了。这种多项式求值方法即 *Horner法则*（ Horner’s Rule）。
 */

#include <stdio.h>

int main(void)
{
    int x;

    printf("\nThe following polynomial will be calculated:\n");
    printf("((((3x + 2) x - 5)x - 1)x + 7)x - 6\n\n");

    printf("Enter a number x: ");
    scanf("%d", &x);

    long result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("\nAnswer: %d\n\n", result);

    return 0;
}
