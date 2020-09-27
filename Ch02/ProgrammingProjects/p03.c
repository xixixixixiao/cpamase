/**
 * 3. 修改上题中的程序，使用户可以自行录入球体的半径。
 */

#include <stdio.h>

#define PI 3.14159265358979323846 // pi

int main(void)
{
    int radius;

    printf("\nEnter the radius of a sphere: ");
    scanf("%d", &radius);

    float volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

    printf("The volume of a %d-meter sphere is: %.2f", radius, volume);

    return 0;
}
