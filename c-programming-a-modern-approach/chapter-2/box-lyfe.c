#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;
    height = 12;
    length = 10;
    width = 8;
    volume = height * length * width;
    printf("Volume: %d\n", volume);

    weight = ((volume + 165)/ 166);

    printf("Weight: %d\n", weight);

    return 0;
}
