//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int id;
    int marks;
};

int main()
{
    struct Student s1;
    struct Student s2;

    printf("Enter Student 1 details (Name ID Marks): ");
    scanf("%s %d %d", s1.name, &s1.id, &s1.marks);

    printf("Enter Student 2 details (Name ID Marks): ");
    scanf("%s %d %d", s2.name, &s2.id, &s2.marks);

    if (s1.id == s2.id && s1.marks == s2.marks && strcmp(s1.name, s2.name) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    return 0;
}
