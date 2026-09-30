#include <stdio.h>
int main()
{
 int card_status, pin_correct;
 float balance, withdrawal;

 printf("Enter card status (1=valid, 0=blocked): ");
 scanf("%d", &card_status);

 printf("Enter PIN status (1=correct, 0=wrong): ");
 scanf("%d", &pin_correct);

 printf("Enter account balance: ");
 scanf("%f", &balance);

 printf("Enter withdrawal amount: ");
 scanf("%f", &withdrawal);


 if (card_status == 0)
 {
    printf("Card blocked. Contact bank.\n");
 }
 else if (pin_correct == 0)
 {
     printf("Incorrect PIN.\n");
 }
 else if (withdrawal <= 0)
 {
    printf("Invalid amount.\n");
 }
 else if (withdrawal > balance)
 {
    printf("Insufficient balance.\n");
 }
 else if (withdrawal > 25000)
 {
    printf("Daily limit exceeded.\n");
 }
 else if ((balance - withdrawal) < 1000)
 {
    printf("Minimum balance must be maintained.\n");
 }
 else
 {
    float new_balance = balance - withdrawal;
    int amount = (int)withdrawal;

    int notes2000 = amount / 2000;
    amount = amount % 2000;

    int notes500 = amount / 500;
    amount = amount % 500;

    int notes100 = amount / 100;

    printf("\n--- Cash Dispensed ---\n");
    printf("New Balance: %.2f\n", new_balance);
    printf("2000 Notes: %d\n", notes2000);
    printf("500 Notes: %d\n", notes500);
    printf("100 Notes: %d\n", notes100);
    printf("Please collect your cash.\n");
 }

    return 0;
}
