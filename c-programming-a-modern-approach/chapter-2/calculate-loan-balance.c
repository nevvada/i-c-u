#include <stdio.h>

int main(void) {
  float loan, interest_rate, monthly_payment;
  
  printf("Enter the amount of your loan: ");
  scanf("%f", &loan);

  printf("Enter your interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter your monthly payment: ");
  scanf("%f", &monthly_payment);
  
  // float interest = loan * (interest_rate * 0.01);
  float interest = (interest * 0.6) / 12;

  float balance_1 = (loan - monthly_payment); 
  float increase_1 = balance_1 * interest;
  float balance_1_plus_interest = balance_1 + increase_1;

  float balance_2 = balance_1 - monthly_payment;
  float increase_2 = balance_2 * interest; 
  float balance_2_plus_interest = balance_2 + increase_2;

  float balance_3 = balance_2 - monthly_payment;
  float increase_3 = balance_3 * interest;
  float balance_3_plus_interest = balance_3 + increase_3;


  printf("Balance remaining after first payment: %.2f\n", balance_1_plus_interest);
  printf("Balance remaining after second payment: %.2f\n", balance_2_plus_interest);
  printf("Balance remaining after third payment: %.2f\n", balance_3_plus_interest);
 
  return 0;  
}
