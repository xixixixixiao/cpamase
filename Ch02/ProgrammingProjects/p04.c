/**
 * 4. 编写一个程序，要求用户输入一个美元数量，然后显示出增加5%税率后的相应金额。格式如下所示：
 * Enter an amount: 100.00
 * With tax added: $105.00
 */

#include <stdio.h>

#define TAX 0.05f

int main(void)
{
    double money;

    printf("\nEnter an amount: ");
    scanf("%lf", &money);

    money = money + (money * TAX);

    printf("With tax added: $%.2f", money);

    return 0;
}