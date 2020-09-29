/**
 * 4. 对C99重复上题。
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
 * gcc -std=c99 .\e04.c -o e04
 */
