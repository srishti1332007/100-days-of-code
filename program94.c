//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

void findLongestWord(const char *sentence) {
    int max_len = 0;
    int current_len = 0;
    int start_index = 0;
    int max_start_index = 0;
    int i = 0;

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n') {
            current_len++;
        } else {
            if (current_len > max_len) {
                max_len = current_len;
                max_start_index = start_index;
            }
            current_len = 0;
            start_index = i + 1;
        }
        i++;
    }

    if (current_len > max_len) {
        max_len = current_len;
        max_start_index = start_index;
    }

    for (i = 0; i < max_len; i++) {
        printf("%c", sentence[max_start_index + i]);
    }
    printf("\n");
}

int main() {
    char input[1000];

    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 1;
    }

    input[strcspn(input, "\n")] = 0;

    findLongestWord(input);

    return 0;
}
