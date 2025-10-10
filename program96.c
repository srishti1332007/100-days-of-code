//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWordsInSentence(char *sentence) {
    char *word_start = sentence;
    char *temp = sentence;
    
    while (*temp) {
        if (*temp == ' ' || *temp == '\n' || *temp == '\t' || *temp == '\0') {
            reverseWord(word_start, temp - 1);
            word_start = temp + 1;
        }
        temp++;
    }
    
    if (word_start < temp) {
        reverseWord(word_start, temp - 1);
    }
}

int main() {
    char input[1000];

    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 1;
    }

    input[strcspn(input, "\n")] = 0;

    reverseWordsInSentence(input);
    
    printf("%s\n", input);

    return 0;
}
