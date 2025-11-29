//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee
{
    char name[50];
    int id;
    float salary;
};

int main()
{
    struct Employee emp1 = {"Alice", 101, 55000.50};
    struct Employee empRead;

    FILE *fp;

    fp = fopen("employee.dat", "wb");
    if (fp == NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(&emp1, sizeof(struct Employee), 1, fp);
    printf("Employee data written to file.\n");

    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&empRead, sizeof(struct Employee), 1, fp);
    printf("Employee data read from file:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", empRead.name, empRead.id, empRead.salary);

    fclose(fp);

    return 0;
}
