#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter the height of box: ");
    scanf("%d", &height);
    
    printf("Enter the length of box: ");
    scanf("%d", &length);

    printf("Enter the width of the box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND) / INCHES_PER_POUND;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional width (width): %d\n", weight);

    return 0;
}
