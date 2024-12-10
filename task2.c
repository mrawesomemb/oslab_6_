#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    printf("Adding 'a' and 'b'\n");
    return a + b;
}

int subtract(int a, int b) {
    printf("Subtracting 'b' from 'a'\n");
    return a - b;
}

int multiply(int a, int b) {
    printf("Multiplying 'a' and 'b'\n");
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    printf("Dividing 'a' by 'b'\n");
    return a / b;
}

// Array of function pointers for each operation
int (*operations[])(int, int) = {add, subtract, multiply, divide};

int main(void) {
    int a = 6, b = 3;
    int choice;

    printf("Operand 'a' : %d | Operand 'b' : %d\n", a, b);
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
    scanf("%d", &choice);

    if (choice == 4) {
        printf("Exiting program.\n");
        return 0;
    }

    // Execute the selected operation
    int result = operations[choice](a, b);
    printf("x = %d\n", result);

    return 0;
}
