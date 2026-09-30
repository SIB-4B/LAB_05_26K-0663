#include <stdio.h>
int main()
{
 int age, heart_rate;
 float oxygen;

 printf("Enter age: ");
 scanf("%d", &age);

 printf("Enter oxygen level (SpO2 %%): ");
 scanf("%f", &oxygen);

 printf("Enter heart rate (bpm): ");
 scanf("%d", &heart_rate);


 if (oxygen < 90)
 {
    printf("Critical: immediate attention\n");
 }
 else if (heart_rate > 130 || heart_rate < 40)
 {
     printf("Critical: cardiac alert\n");
 }
 else if (age >= 65 && oxygen < 95)
 {
    printf("High priority\n");
 }
 else if (age <= 5 && heart_rate > 110)
 {
    printf("High priority\n");
 }
 else if (oxygen < 97)
 {
    printf("Medium priority\n");
 }
 else
 {
     printf("Low priority\n");
 }

    return 0;
}
