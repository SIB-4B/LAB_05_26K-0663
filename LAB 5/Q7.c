#include <stdio.h>
int main()
{
 int stream, interest, medicine = 0;

 printf("Select Stream:\n1 = Science\n2 = Commerce\n3 = Arts\nChoice: ");
 scanf("%d", &stream);

 
 if (stream == 1) // Science
 {
    printf("Select Interest:\n1 = Biology\n2 = Physics\n3 = Chemistry\nChoice: ");
    scanf("%d", &interest);

    if (interest == 1)
    {
        printf("Are you interested in medicine? (1=Yes, 0=No): ");
        scanf("%d", &medicine);

        if (medicine == 1)
            printf("Recommended Course: MBBS\n");
        else
            printf("Recommended Course: Biotechnology\n");
    }
    else if (interest == 2)
    {
        printf("Recommended Course: Physics Degree\n");
    }
    else if (interest == 3)
    {
        printf("Recommended Course: Chemistry Degree\n");
    }
    else
    {
        printf("Invalid choice.\n");
    }
 }
 else if (stream == 2) // Commerce
 {
    printf("Select Interest:\n1 = Accounting\n2 = Marketing\nChoice: ");
    scanf("%d", &interest);

    if (interest == 1)
        printf("Recommended Course: Accounting and Finance\n");
    else if (interest == 2)
        printf("Recommended Course: Business Administration & Marketing\n");
    else
        printf("Invalid choice.\n");
 }
 else if (stream == 3) // Arts
 {
    printf("Select Interest:\n1 = Literature\n2 = History\n3 = Psychology\nChoice: ");
    scanf("%d", &interest);

    if (interest == 1)
        printf("Recommended Course: English Literature\n");
    else if (interest == 2)
        printf("Recommended Course: World History\n");
    else if (interest == 3)
        printf("Recommended Course: Behavioral Psychology\n");
    else
        printf("Invalid choice.\n");
 }
 else
 {
    printf("Invalid choice.\n");
 }

    return 0;
}