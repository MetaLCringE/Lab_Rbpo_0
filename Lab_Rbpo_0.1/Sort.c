#include "Header.h"

struct Person* Sort(struct Person* persons, int count, enum SortType sortType) {
    switch (sortType)
    {
    case 0:
        for (int i = 0; i < count; i++) {
            for (int j = 0; j < count - i - 1; j++) {
                int compare = CompareStrings(persons[j].firstName, persons[j + 1].firstName);
                if (compare >= 1) {
                    struct Person buble = persons[j];
                    persons[j] = persons[j + 1];
                    persons[j + 1] = buble;
                }
                else {
                    if (compare == 0) {
                        int compare = CompareStrings(persons[j].surName, persons[j + 1].surName);
                        if (compare >= 1) {
                            struct Person buble = persons[j];
                            persons[j] = persons[j + 1];
                            persons[j + 1] = buble;
                        }
                        else {
                            if (compare == 0) {
                                int compare = CompareStrings(persons[j].lastName, persons[j + 1].lastName);
                                if (compare >= 1) {
                                    struct Person buble = persons[j];
                                    persons[j] = persons[j + 1];
                                    persons[j + 1] = buble;
                                }
                                else {
                                    if (compare == 0) {
                                        if (persons[j].age >= persons[j + 1].age) {
                                            struct Person buble = persons[j];
                                            persons[j] = persons[j + 1];
                                            persons[j + 1] = buble;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
    case 1:
        for (int i = 0; i < count; i++) {
            for (int j = 0; j < count - i - 1; j++) {
                int compare = CompareStrings(persons[j].firstName, persons[j + 1].firstName);
                if (compare <= -1) {
                    struct Person buble = persons[j];
                    persons[j] = persons[j + 1];
                    persons[j + 1] = buble;
                }
                else {
                    if (compare == 0) {
                        int compare = CompareStrings(persons[j].surName, persons[j + 1].surName);
                        if (compare <= -1) {
                            struct Person buble = persons[j];
                            persons[j] = persons[j + 1];
                            persons[j + 1] = buble;
                        }
                        else {
                            if (compare == 0) {
                                int compare = CompareStrings(persons[j].lastName, persons[j + 1].lastName);
                                if (compare <= -1) {
                                    struct Person buble = persons[j];
                                    persons[j] = persons[j + 1];
                                    persons[j + 1] = buble;
                                }
                                else {
                                    if (compare == 0) {
                                        if (persons[j].age <= persons[j + 1].age) {
                                            struct Person buble = persons[j];
                                            persons[j] = persons[j + 1];
                                            persons[j + 1] = buble;
                                        }
                                    }
                                }

                            }
                        }
                    }
                }
            }
        }
        break;
    default:
        break;
    }
    return persons;
}
