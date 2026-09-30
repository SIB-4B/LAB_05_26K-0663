#include <stdio.h>
int main()
{
 float accuracy, confidence;
 int dataset_size, role, status_flags;
 int TRAINED = 1;
 int VALIDATED = 2;
 int APPROVED = 4;
 int DEPRECATED = 8;

 printf("Enter accuracy (0-100): ");
 scanf("%f", &accuracy);

 printf("Enter confidence score (0-100): ");
 scanf("%f", &confidence);

 printf("Enter dataset size (number of samples): ");
 scanf("%d", &dataset_size);

 printf("Enter user role (1=Intern, 2=Engineer, 3=Admin): ");
 scanf("%d", &role);

 printf("Enter status flags integer: ");
 scanf("%d", &status_flags);


 float ds_component = dataset_size / 1000.0;
 if (ds_component > 10.0)
 {
    ds_component = 10.0;
 }
 float model_score = (accuracy * 0.5) + (confidence * 0.3) + (ds_component * 2);
 printf("\nModel Score: %.2f\n", model_score);


 if (status_flags & DEPRECATED)
 {
    printf("Decision: Rejected: model deprecated\n");
 }
 else if (!(status_flags & TRAINED))
 {
    printf("Decision: Rejected: not trained\n");
 }
 else if (!(status_flags & VALIDATED))
 {
    printf("Decision: Rejected: not validated\n");
 }
 else if (!(status_flags & APPROVED))
 {
    printf("Decision: Pending: awaiting approval\n");
 }
 else if (accuracy < 70 || confidence < 60)
 {
    printf("Decision: Rejected: performance too low\n");
 }
 else if (dataset_size < 5000)
 {
    printf("Decision: Rejected: dataset too small\n");
 }
 else if (role == 1)
 {
    printf("Decision: Denied: interns cannot deploy\n");
 }
 else if (role == 2 && model_score < 80)
 {
    printf("Decision: Denied: engineer needs higher score\n");
 }
 else
 {
    printf("Decision: Approved for deployment\n");
 }


 printf("\n--- System Diagnostics ---\n");
 printf("sizeof(accuracy): %lu bytes\n", sizeof(accuracy));
 printf("sizeof(dataset_size): %lu bytes\n", sizeof(dataset_size));
 printf("sizeof(status_flags): %lu bytes\n", sizeof(status_flags));


 float avg_acc_conf = (accuracy + confidence) / 2.0;
 if (model_score > avg_acc_conf)
 {
    printf("Model score (%.2f) is ABOVE average of accuracy and confidence (%.2f).\n", model_score, avg_acc_conf);
 }
 else
 {
    printf("Model score (%.2f) is NOT above average of accuracy and confidence (%.2f).\n", model_score, avg_acc_conf);
 }

    return 0;
}