#include "Header.h"

void PrintPersons(struct Person* persons, int personsCount) {
    printf("____________________________________________________________________________________\n");
    printf("|%20s|%20s|%20s|%20s|\n", "First Name", "Second Name", "Last Name", "Age");
    for (int i = 0; i < personsCount; i++) {
        printf("|--------------------|--------------------|--------------------|--------------------|\n");
        printf("|%20s|%20s|%20s|%20d|\n", persons[i].firstName, persons[i].surName, persons[i].lastName, persons[i].age);
    }
    printf("_____________________________________________________________________________________\n");

}