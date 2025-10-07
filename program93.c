//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define CHAR_RANGE 256

void sortString(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int areAnagrams(const char *str1, const char *str2) {
    int n1 = strlen(str1);
    int n2 = strlen(str2);

    if (n1 != n2) {
        return 0;
    }

    int count[CHAR_RANGE] = {0};
    
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(int)str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        count[(int)str2[i]]--;
    }

    for (int i = 0; i < CHAR_RANGE; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s1[100], s2[100];

    scanf("%s", s1);
    scanf("%s", s2);

    if (areAnagrams(s1, s2)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
