#include <stdio.h>
int main()
{
 int category, sub_type, delayed = 0;

 printf("Select Category:\n1. Greeting\n2. Query\n3. Complaint\n4. Feedback\nChoice: ");
 scanf("%d", &category);


 if (category == 1) // Greeting
 {
    printf("Select Sub-type (1=Morning, 2=Evening): ");
    scanf("%d", &sub_type);

    if (sub_type == 1)
        printf("Bot: Good morning! How can I assist you today?\n");
    else if (sub_type == 2)
        printf("Bot: Good evening! How can I assist you today?\n");
    else
        printf("Invalid selection.\n");
 }
 else if (category == 2)
 {
     printf("Select Sub-type (1=Product, 2=Billing, 3=Technical): ");
     scanf("%d", &sub_type);

     if (sub_type == 1)
        printf("Bot: Here is our product catalog and specifications.\n");
     else if (sub_type == 2)
        printf("Bot: Connecting you to billing support.\n");
     else if (sub_type == 3)
        printf("Bot: Routing your issue to technical support.\n");
     else
        printf("Invalid selection.\n");
 }
 else if (category == 3) // Complaint
 {
    printf("Select Sub-type (1=Delivery, 2=Quality): ");
    scanf("%d", &sub_type);

    if (sub_type == 1)
    {
        printf("Is your order delayed? (1=Yes, 0=No): ");
        scanf("%d", &delayed);

        if (delayed == 1)
            printf("Bot: We sincerely apologize for the delay. Tracking your package now.\n");
        else
            printf("Bot: We apologize for the delivery issue. An agent will contact you.\n");
    }
    else if (sub_type == 2)
    {
        printf("Bot: We apologize for the quality issue. Please file a return request.\n");
    }
    else
    {
        printf("Invalid selection.\n");
    }
 }
 else if (category == 4) // Feedback
 {
    printf("Select Sub-type (1=Positive, 2=Negative): ");
    scanf("%d", &sub_type);

    if (sub_type == 1)
        printf("Bot: Thank you for your positive feedback!\n");
    else if (sub_type == 2)
        printf("Bot: Thank you for your feedback. We will work to improve.\n");
    else
        printf("Invalid selection.\n");
 }
 else
 {
    printf("Invalid selection.\n");
 }

    return 0;
}