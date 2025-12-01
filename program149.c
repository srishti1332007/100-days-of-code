//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student *ptr;
    
    ptr = (struct Student *)malloc(sizeof(struct Student));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter Student details (Name Roll Marks): ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    printf("Name: %s | Roll: %d | Marks: %d\n",
           ptr->name,
           ptr->roll,
           ptr->marks);

    free(ptr);
    
    return 0;
}
