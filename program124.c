//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().//

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char src_name[50], dest_name[50], ch;

    scanf("%s %s", src_name, dest_name);

    src = fopen(src_name, "r");
    if (src == NULL) {
        printf("Error opening source file.");
        return 1;
    }

    dest = fopen(dest_name, "w");
    if (dest == NULL) {
        printf("Error creating destination file.");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s", dest_name);
    return 0;
}
