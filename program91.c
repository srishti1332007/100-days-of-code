//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>

void removeVowels(char *str) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char input[100];
    scanf("%s", input);
    removeVowels(input);
    printf("%s\n", input);
    return 0;
}
