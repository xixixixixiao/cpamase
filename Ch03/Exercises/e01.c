/**
 * 1. 下面的printf函数调用产生的输出分别是什么？
 *    (a) printf("%6d,%4d", 86, 1040);
 *    (b) printf("%12.5e", 30.253);
 *    (c) printf("%.4f", 83.162);
 *    (d) printf("%-6.2g", .0000009979);
 */

#include <stdio.h>

int main(void)
{
    printf("%6d,%4d\n", 86, 1040);
    // OUTPUT:
    //     86,1040

    printf("%12.5e\n", 30.253);
    // OUTPUT
    // 3.02530e+001

    printf("%.4f\n", 83.162);
    // OUTPUT
    // 83.1620

    printf("%-6.2g\n", .0000009979);
    // OUTPUT
    // 1e-006

    return 0;
}
