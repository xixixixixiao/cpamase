/**
 * 4. 编写一个程序，读入用户输入的整数并按八进制（基数为8）显示出来：
 * 
 *    Enter a number between 0 and 32767: 1953
 *    In octal, your number is: 03641 
 *    
 *    输出应为5位数，即便不需要这么多数位也要如此。
 *     
 *    提示：
 *    要把一个数转换成八进制，首先将其除以8，所得的余数是八进制数的最后一位（本例中为1）；
 *    然后把原始的数除以8，对除法结果重复上述过程，得到倒数第二位。
 *    （如第7章所示，printf可以显示八进制的数，所以这个程序实际上有更简单的写法。）
 */

#include <stdio.h>

int main(void)
{
    int decimal, otcal1, otcal2, otcal3, otcal4, otcal5;

    printf("\n\nEnter a number between 0 and 32767: ");
    scanf("%d", &decimal);

    printf("In octal, your number is: ");

    otcal5 = decimal % 8;
    decimal /= 8;

    otcal4 = decimal % 8;
    decimal /= 8;

    otcal3 = decimal % 8;
    decimal /= 8;

    otcal2 = decimal % 8;
    decimal /= 8;

    otcal1 = decimal % 8;

    printf("%d%d%d%d%d", otcal1, otcal2, otcal3, otcal4, otcal5);

    return 0;
}