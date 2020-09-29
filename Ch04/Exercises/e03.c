/**
 * 3. 下列表达式在C89中的值是多少？（如果表达式有多个可能的值，都列出来。）
 *  (a) 8 / 5 
 *  (b) -8 / 5 
 *  (c) 8 / -5 
 *  (d) -8 / -5
 */

#include <stdio.h>

int main(void)
{
    printf("%d\n", 8 / 5);
    printf("%d\n", -8 / 5);
    printf("%d\n", 8 / -5);
    printf("%d\n", -8 / -5);

    return 0;
}

/**
 * gcc -std=c89 .\e03.c -o e03
 */
