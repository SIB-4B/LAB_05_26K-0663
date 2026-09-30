#include <stdio.h>
int main()
{
 int permissions;
 int READ = 1;
 int WRITE = 2;
 int EXECUTE = 4;
 int DELETE = 8;
 int ADMIN = 16;

 printf("Enter permissions integer: ");
 scanf("%d", &permissions);
 

 printf("\nDetected Bits: ");
 if (permissions & READ) printf("[READ] ");
 if (permissions & WRITE) printf("[WRITE] ");
 if (permissions & EXECUTE) printf("[EXECUTE] ");
 if (permissions & DELETE) printf("[DELETE] ");
 if (permissions & ADMIN) printf("[ADMIN] ");
 printf("\n");


 if (permissions & ADMIN)
 {
    printf("Access level: Full access: admin\n");
 }
 else if ((permissions & DELETE) && (permissions & WRITE))
 {
    printf("Access level: Access: delete and write\n");
 }
 else if ((permissions & EXECUTE) && !(permissions & WRITE))
 {
    printf("Access level: Access: execute only\n");
 }
 else if ((permissions & READ) && !(permissions & WRITE) && !(permissions & EXECUTE))
 {
    printf("Access level: Access: read-only\n");
 }
 else if (permissions == 0)
 {
    printf("Access level: Access denied\n");
 }
 else
 {
    printf("Access level: Access: custom permissions\n");
 }

    return 0;
}