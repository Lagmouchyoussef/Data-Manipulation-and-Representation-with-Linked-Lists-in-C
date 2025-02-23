#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Station {
    int number;
    char name[50];
    int busCount;
    struct Station *next;
} Station;

Station *head = NULL;

Station* createStation(int number, char name[], int busCount) {
    Station *newStation = (Station*)malloc(sizeof(Station));
    newStation->number = number;
    strcpy(newStation->name, name);
    newStation->busCount = busCount;
    newStation->next = NULL;
    return newStation;
}

void addStation(int number, char name[], int busCount) {
    Station *newStation = createStation(number, name, busCount);
    if (head == NULL) {
        head = newStation;
    } else {
        Station *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newStation;
    }
}

void displayStations() {
    Station *current = head;
    printf("List of bus stations:\n");
    while (current != NULL) {
        printf("Station %d: %s (Buses: %d)\n", current->number, current->name, current->busCount);
        current = current->next;
    }
}

void deleteLastStation() {
    if (head == NULL) {
        printf("The list is empty, no station to delete.\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
    } else {
        Station *current = head;
        while (current->next->next != NULL) {
            current = current->next;
        }
        free(current->next);
        current->next = NULL;
    }
    printf("Last station deleted.\n");
}

int main() {
    addStation(1, "Maarif", 2);
    addStation(2, "Hay Salam", 4);
    addStation(3, "Oulfa", 5);

    displayStations();

    deleteLastStation();
    displayStations();

    addStation(4, "Ain Diab", 3);
    displayStations();

    return 0;
}