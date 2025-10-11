//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitials(const char *name) {
    if (name[0] == '\0') {
        return;
    }

    printf("%c.", toupper(name[0]));

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c.", toupper(name[i + 1]));
        }
    }
    printf("\n");
}

int main() {
    char input[100];
    
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 1;
    }
    
    input[strcspn(input, "\n")] = 0;

    printInitials(input);

    return 0;
}
