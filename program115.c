//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[1000];
    char t[1000];
    
    if (scanf("%s", s) != 1 || scanf("%s", t) != 1) {
        return 0;
    }

    int len_s = strlen(s);
    int len_t = strlen(t);

    if (len_s != len_t) {
        printf("Not Anagram\n");
        return 0;
    }

    int counts[26] = {0};
    int i;

    for (i = 0; i < len_s; i++) {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}

