/**
 * 3.通过下列方法缩写程序dweight.c：
 * （ 1）用初始化式替换对变量height、 length和width的赋值；
 * （ 2）去掉变量weight，在最后的printf语句中计算(volume + 165)/ 166。
 */

/* dweight.c (Chapter 2, page 20) */
/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

// int main(void)
// {
//   int height, length, width, volume, weight;

//   height = 8;
//   length = 12;
//   width = 10;
//   volume = height * length * width;
//   weight = (volume + 165) / 166;

//   printf("Dimensions: %dx%dx%d\n", length, width, height);
//   printf("Volume (cubic inches): %d\n", volume);
//   printf("Dimensional weight (pounds): %d\n", weight);

//   return 0;
// }

int main(void)
{
  int height = 8, length = 12, width = 10, volume;

  volume = height * length * width;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

  return 0;
}