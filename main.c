#include "stack.h"
int stack[SIZE];
int top = -1;

int main() {

    int choice, value;
    while (1) {
        printf("\n--- STACK MENU ---\n");
        printf("WARNING: SIZE OF STACK IS 100\n");
        printf("1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n5. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("ENTER VALUE TO BE PUSHED: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("EXIT SUCCESS\n");
            return 0;
        default:
            printf("INVALID CHOICE!!! TRY AGAIN!!!\n");
        }
    }
}
