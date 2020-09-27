/**
 * 建立并运行由 Kernighan 和 Ritchie 编写的著名的“hello, world”程序：
 */

#include <stdio.h>

// int main(void)
// {
//     printf("hello world");
// }

/**
 * 在编译时是否有警告信息？如果有，需要如何进行修改呢？
 * 
 * 在 gcc version 4.9.2 中没有警告信息.
 * 
 * 应该添加 return 0;
 */

int main(void)
{
    printf("hello world");

    return 0;
}
