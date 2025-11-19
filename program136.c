//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char op_str[10];
    int num1, num2;
    int result = 0;
    enum Operation op;

    if (scanf("%9s %d %d", op_str, &num1, &num2) != 3) {
        return 1;
    }

    if (strcmp(op_str, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(op_str, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(op_str, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        return 1;
    }

    switch (op) {
        case ADD:
            result = num1 + num2;
            break;
        case SUBTRACT:
            result = num1 - num2;
            break;
        case MULTIPLY:
            result = num1 * num2;
            break;
    }

    printf("%d\n", result);

    return 0;
}
