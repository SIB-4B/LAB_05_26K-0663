#include <stdio.h>
int main()
{
 int time, motion, light, room, cooking = 0;

    printf("Enter time (0-23): ");
    scanf("%d", &time);

    printf("Enter motion detected (1=Yes, 0=No): ");
    scanf("%d", &motion);

    printf("Enter light level (0-100): ");
    scanf("%d", &light);

    printf("Select Room (1=Living Room, 2=Bedroom, 3=Kitchen): ");
    scanf("%d", &room);

    // Kitchen Special Rule
    if (room == 3)
    {
        printf("Is cooking in progress? (1=Yes, 0=No): ");
        scanf("%d", &cooking);
    }

    printf("\n--- Smart Home Action ---\n");

    // Process Kitchen Cooking Exception First
    if (room == 3 && cooking == 1)
    {
        printf("Mode: Cooking Mode | Action: Turn on exhaust fan\n");
    }
    else if (motion == 0)
    {
        printf("Mode: Away mode | Action: All OFF\n");
    }
    else if (time >= 6 && time < 18)
    {
        printf("Mode: Day mode | Action: Lights ON\n");
    }
    else if (time >= 18 && time <= 23)
    {
        printf("Mode: Evening mode | Action: Dim lights\n");
    }
    else if (time >= 0 && time < 6)
    {
        printf("Mode: Night mode | Action: Lights OFF\n");
    }

    return 0;
}