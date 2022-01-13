#include "Header.h"




int main(int argc, char* argv[]) {
    system("chcp 1251");
    int personCount = 0;
    struct Person* persons = GetPersons(argc, argv, &personCount);
    if (personCount == 0) return 0;
    int sortType;
    PrintPersons(persons, personCount);
    printf("\n");
    printf("%s\n", "How we will sort: up(0) or down(1)?");
    scanf("%d", &sortType);
    if (sortType == 0) {
        persons =Sort(persons, personCount, DESC);
    }
    else if (sortType == 1) {
        persons =Sort(persons, personCount, ASC);
    }
    else {
        printf("%s\n%s\n", "Incorrect insert", "Exit");
        free(persons);
        system("pause");
        return 0;
    }
    PrintPersons(persons, personCount);
    free(persons);
    system("pause");
    return 0;
}
