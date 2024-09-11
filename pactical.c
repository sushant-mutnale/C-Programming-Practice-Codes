#include <stdio.h>

#define MAX_NAME_LENGTH 50

struct Person
{
    char name[MAX_NAME_LENGTH];
    int age;
    int ID;
};

void displayPerson(const struct Person *person)
{
    printf("Name: %s\n", person->name);
    printf("Age: %d\n", person->age);
    printf("ID: %d\n", person->ID);
    printf("\n");
}

int main()
{
    struct Person person1, person2;

    printf("Enter details for person 1:\n");
    printf("Name: ");
    fgets(person1.name, MAX_NAME_LENGTH, stdin);
    printf("Age: ");
    scanf("%d", &person1.age);
    printf("ID: ");
    scanf("%d", &person1.ID);
    getchar(); // Clearing the newline character from the input buffer

    printf("\nEnter details for person 2:\n");
    printf("Name: ");
    fgets(person2.name, MAX_NAME_LENGTH, stdin);
    printf("Age: ");
    scanf("%d", &person2.age);
    printf("ID: ");
    scanf("%d", &person2.ID);

    printf("\nDetails of person 1:\n");
    displayPerson(&person1);

    printf("Details of person 2:\n");
    displayPerson(&person2);
}
