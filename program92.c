//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>

char findFirstRepeating(const char *str) {
    int count[26] = {0};
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            count[index]++;
        }
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            if (count[index] > 1) {
                return str[i];
            }
        }
    }

    return '\0';
}

int main() {
    char input[100];
    scanf("%s", input);

    char result = findFirstRepeating(input);

    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
