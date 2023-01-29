#include <stdio.h>

int main(void) {
  float loan, interest_rate, monthly_payment;
  
  printf("Enter the amount of your loan: ");
  scanf("%f", &loan);

  printf("Enter your interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter your monthly payment: ");
  scanf("%f", &monthly_payment);
 
  float balance = loan;
  float monthly_rate = (interest_rate / 100.0f) / 12;

  balance = (balance - monthly_payment) + (balance * monthly_rate);

  printf("Balance remaining after first payment: %.2f\n", balance);

  balance = (balance - monthly_payment) + (balance * monthly_rate);
  printf("Balance remaining after second payment: %.2f\n", balance);

  balance = (balance - monthly_payment) + (balance * monthly_rate);
  printf("Balance remaining after third payment: %.2f\n", balance);
 
  return 0;  
}
