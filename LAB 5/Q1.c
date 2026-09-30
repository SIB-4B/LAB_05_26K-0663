#include <stdio.h>
int main()
{
 int vehicle, member;
 float hours, fee = 0;

 printf("Enter vehicle type by selecting 1=bike, 2=car, 3=truck : ");
 scanf("%d", &vehicle);

 printf("Enter hours parked: ");
 scanf("%f", &hours);

 printf("Enter membership status by selecting 1=member, 0=non-member: ");
 scanf("%d", &member);


 if (vehicle < 1 || vehicle > 3)
 {
  printf("Invalid vehicle\n");
 }
 else if (hours <= 0)
 {
      printf("Invalid duration\n");
 }
 else
 {
    if (vehicle == 1) 
    {
     fee = 20 * hours;
    }
    else if (vehicle == 2) 
    {
     if (hours <= 2)
     fee = 50;
     else
        fee = 50 + 30 * (hours - 2);
    }
    else if (vehicle == 3) // Truck
    {
     if (hours <= 3)
     fee = 100;
     else
         fee = 100 + 50 * (hours - 3);
    }

    if (member == 1 && fee > 200)
    {
     fee = fee - (0.15 * fee); // or fee *= 0.85
    }

        printf("Final Fee: %.2f\n", fee);
}

    return 0;
}