//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitialsWithFullSurname(const char *name) {
    if (name[0] == '\0') {
        return;
    }

    int len = strlen(name);
    int last_space_index = -1;

    for (int i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            last_space_index = i;
            break;
        }
    }

    if (last_space_index == -1) {
        printf("%s\n", name);
        return;
    }

    printf("%c.", toupper(name[0]));

    for (int i = 1; i < last_space_index; i++) {
        if (name[i] == ' ' && i + 1 < last_space_index) {
            printf("%c.", toupper(name[i + 1]));
        }
    }

    printf(" %s\n", name + last_space_index + 1);
}

int main() {
    char input[100];
    
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 1;
    }
    
    input[strcspn(input, "\n")] = 0;

    printInitialsWithFullSurname(input);

    return 0;
}
