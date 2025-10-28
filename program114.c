//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int char_index[128];
    for (int i = 0; i < 128; i++) {
        char_index[i] = 0;
    }

    int max_len = 0;
    int left = 0;
    int right;

    for (right = 0; right < n; right++) {
        char current_char = s[right];

        if (char_index[current_char] > left) {
            left = char_index[current_char];
        }

        char_index[current_char] = right + 1;
        
        max_len = max(max_len, right - left + 1);
    }

    printf("%d\n", max_len);

    return 0;
}

