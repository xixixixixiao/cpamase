/**
 * 1. 给出下列程序片段的输出结果。假设i、j和k都是int型变量。
 * (a) i = 5; j = 3; 
 *     printf("%d %d", i / j, i % j); 
 * (b) i = 2; j = 3; 
 *     printf("%d", (i + 10) % j); 
 * (c) i = 7; j = 8; k = 9; 
 *     printf("%d", (i + 10) % k / j); 
 * (d) i = 1; j = 2; k = 3; 
 *     printf("%d", (i + 5) % (j + 2) / k);
 */

#include <stdio.h>

int main(void)
{
    // (a)
    // int i = 5, j = 3;
    // printf("%d %d", i / j, i % j);

    // OUTPUT:
    // 1 2

    // (b)
    // int i = 2, j = 3;
    // printf("%d", (i + 10) % j);

    // OUTPUT:
    // 0

    // (c)
    // int i = 7, j = 8, k = 9;
    // printf("%d", (i + 10) % k / j);

    // OUTPUT:
    // 1

    // (d)
    int i = 1, j = 2, k = 3;
    printf("%d", (i + 5) % (j + 2) / k);

    // OUTPUT:
    // 0

    return 0;
}
