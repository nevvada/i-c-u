#include <stdio.h>

#define PI 3.14

int main(void)
{
    float radius, volume, radius_cubed;

    printf("Enter radius: ");
    scanf("%f", &radius);
    
    radius_cubed = radius * radius * radius;
    volume = (4.0f / 3.0f) * PI * radius_cubed;

    printf("Volume: %.2f\n", volume);

    return 0;
}

