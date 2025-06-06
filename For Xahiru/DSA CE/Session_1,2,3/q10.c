#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    int age;
    struct student* next;
};

struct student* create_student(int id, char* name, int age) {
    struct student* new_student = (struct student*)malloc(sizeof(struct student));
    new_student->id = id;
    strcpy(new_student->name, name);
    new_student->age = age;
    new_student->next = NULL;
    return new_student;
}

void insert(struct student** head, int id, char* name, int age) {
    struct student* new_student = create_student(id, name, age);
    new_student->next = *head;
    *head = new_student;
    printf("Student inserted: ID=%d, Name=%s, Age=%d\n", id, name, age);
}

void display(struct student* head) {
    if (head == NULL) {
        printf("The list is empty\n");
        return;
    }
    struct student* temp = head;
    printf("The list of students:\n");
    while (temp != NULL) {
        printf("ID=%d, Name=%s, Age=%d\n", temp->id, temp->name, temp->age);
        temp = temp->next;
    }
}

void delete(struct student** head, int id) {
    struct student* temp = *head;
    struct student* prev = NULL;
    if (temp != NULL && temp->id == id) {
        *head = temp->next;
        free(temp);
        printf("Student with ID=%d deleted.\n", id);
        return;
    }
    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Student with ID=%d not found.\n", id);
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Student with ID=%d deleted.\n", id);
}

void locate(struct student* head, int id) {
    struct student* temp = head;
    int index = 1;
    while (temp != NULL) {
        if (temp->id == id) {
            printf("Student found at position %d: ID=%d, Name=%s, Age=%d\n", index, temp->id, temp->name, temp->age);
            return;
        }
        temp = temp->next;
        index++;
    }
    printf("Student with ID=%d not found.\n", id);
}

void get(struct student* head, int index) {
    struct student* temp = head;
    int current = 1;
    while (temp != NULL) {
        if (current == index) {
            printf("Student at index %d: ID=%d, Name=%s, Age=%d\n", index, temp->id, temp->name, temp->age);
            return;
        }
        temp = temp->next;
        current++;
    }
    printf("Index %d is out of bounds.\n", index);
}
void clear(struct student** head) {
    struct student* current = *head;
    struct student* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head = NULL;
    printf("List cleared.\n");
}

int length(struct student* head) {
    int count = 0;
    struct student* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    struct student* head = NULL;
    insert(&head, 33120013, "Tuhin", 23);
    insert(&head, 33120014, "Rabbi", 24);
    insert(&head, 33120015, "Shimanto", 22);
    insert(&head, 33120016, "Nuhash", 26);

    display(head);

    int select, id, index, age;
    char name[50];

    do {
        printf("\nMenu:\n");
        printf("1: Clear the list\n");
        printf("2: Display the length\n");
        printf("3: Get a student by index\n");
        printf("4: Locate a student by ID\n");
        printf("5: Insert a student\n");
        printf("6: Delete a student by ID\n");
        printf("7: Display the list\n");
        printf("0: Exit\n");
        printf("Choose an option (0-7): ");
        scanf("%d", &select);

        switch (select) {
            case 1:
                clear(&head);
                break;
            case 2:
                printf("Length of the list: %d\n", length(head));
                break;
            case 3:
                printf("Enter index to retrieve: ");
                scanf("%d", &index);
                get(head, index);
                break;
            case 4:
                printf("Enter ID to locate: ");
                scanf("%d", &id);
                locate(head, id);
                break;
            case 5:
                printf("Enter student ID, Name, and Age: ");
                scanf("%d %s %d", &id, name, &age);
                insert(&head, id, name, age);
                break;
            case 6:
                printf("Enter ID to delete: ");
                scanf("%d", &id);
                delete(&head, id);
                break;
            case 7:
                display(head);
                break;
            case 0:
                printf("Exiting.\n");
                clear(&head);
                break;
            default:
                printf("Invalid choice. Please choose between 0-7.\n");
        }
    } while (select != 0);

    return 0;
}