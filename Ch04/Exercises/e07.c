/**
 * 7. 本章计算UPC校验位的方法最后几步是：
 *    把总的结果减去1，相减后的结果除以10取余数，用9减去余数。
 * 
 *    换成下面的步骤也可以：
 *    总的结果除以10取余数，用10减去余数。
 *    
 *    这样做为什么可行？
 */

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    // printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    printf("Check digit: %d\n", 10 - (total % 10));

    return 0;
}

/**
 * 证明:
 * 
 *   9-((x-1)%10)
 * = 9-{(x-1)-floor((x-1)/10)*10}
 * = 9-(x-1)+floor((x-1)/10)*10
 * = 9-x+1+floor((x-1)/10)*10
 * = 10-x+floor((x-1)/10)*10
 * = 10-x+floor(x/10-1/10)*10 [1] 式
 *   
 *   10-(x%10)
 * = 10-[x-floor(x/10)*10]
 * = 10-x+floor(x/10)*10 [2] 式
 * 
 * 心里很没底地说:
 * floor(x/10-1/10)
 * 与
 * floor(x/10)
 * 相等.
 */
