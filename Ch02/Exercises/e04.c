/**
 * 4.编写一个程序来声明几个int型和float型变量，不对这些变量进行初始化，然后显示它们的值。这些值是否有规律？（通常情况下没有。）
 */

#include <stdio.h>

int main(void)
{
    int a, b, c;
    float d, e, f;

    printf("int a=%d,\nint b=%d,\nint c=%d,\nfloat d=%f,\nfloat e=%f,\nfloat f=%f", a, b, c, d, e, f);

    return 0;
}

/**
 * 答:
 * output:
 * int a=0,
 * int b=0,
 * int c=44,
 * float d=0.000000,
 * float e=0.000000,
 * float f=0.000000
 * 
 * 当未开启 GCC 错误检查时, 整型将被初始化为任意值, 但是浮点数被自动初始化为 0.
 * 
 * 当开启 GCC 错误检查时, 整型也被初始为 0.
 */