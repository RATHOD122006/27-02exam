#include <stdio.h>

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int modulus(int a, int b);

int main() {
    int c, first, second;
    
    do {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 to exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &c);
        
        switch(c) {
            case 1:
                printf("Enter the first number: ");
                scanf("%d", &first);
                printf("Enter the second number: ");
                scanf("%d", &second);
                printf("Addition of %d and %d is %d\n", first, second, addition(first, second));
                break;
            case 2:
                printf("Enter the first number: ");
                scanf("%d", &first);
                printf("Enter the second number: ");
                scanf("%d", &second);
                printf("Subtraction of %d and %d is %d\n", first, second, subtraction(first, second));
                break;
            case 3:
                printf("Enter the first number: ");
                scanf("%d", &first);
                printf("Enter the second number: ");
                scanf("%d", &second);
                printf("Multiplication of %d and %d is %d\n", first, second, multiplication(first, second));
                break;
            case 4:
                printf("Enter the first number: ");
                scanf("%d", &first);
                printf("Enter the second number: ");
                scanf("%d", &second);
                printf("Division of %d and %d is %d\n",first, second, division(first, second));
                break;
            case 5:
                printf("Enter the first number: ");
                scanf("%d", &first);
                printf("Enter the second number: ");
                scanf("%d", &second);
                printf("Modulus of %d and %d is %d\n",first, second, modulus(first, second));
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (c!= 0);
    
    return 0;
}


int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

int modulus(int a, int b) {
    if (b != 0)
        return a % b;
    else {
        printf("Error! Modulus by zero.\n");
        return 0;
    }
}