#include <stdio.h>

int main(void)
{
    float dollars, new_amount;

    printf("Enter a dollar amount: ");
    scanf("%f", &dollars);

    new_amount = (dollars * 1.05);

    printf("new amount: $%.2f\n", new_amount);
    
    return 0;
}
