//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student s1 = {"Initial Name", 0, 0};
    struct Student *ptr = &s1;

    printf("Enter new Student details (Name Roll Marks): ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name,
           ptr->roll,
           ptr->marks);

    return 0;
}
