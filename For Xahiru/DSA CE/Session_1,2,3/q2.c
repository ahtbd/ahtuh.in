#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int size;
} SequentialList;
void initList(SequentialList* list) {
    list->size = 0;
}

void insertElement(SequentialList* list, int element) {
    if (list->size < MAX_SIZE) {
        list->data[list->size++] = element;
    } else {
        printf("List is full. Cannot insert element.\n");
    }
}

int locateElement(SequentialList* list, int x) {
    for (int i = 0; i < list->size; i++) {
        if (list->data[i] == x) {
            return i;
        }
    }
    return -1;
}

int getElementAtIndex(SequentialList* list, int index) {
    if (index >= 0 && index < list->size) {
        return list->data[index];
    } else {
        printf("Invalid index.\n");
        return -1;
    }
}

void deleteElement(SequentialList* list, int x) {
    int index = locateElement(list, x);
    if (index != -1) {
        for (int i = index; i < list->size - 1; i++) {
            list->data[i] = list->data[i + 1];
        }
        list->size--;
        printf("Element %d deleted.\n", x);
    } else {
        printf("Element %d not found.\n", x);
    }
}

void displayList(SequentialList* list) {
    if (list->size == 0) {
        printf("List is empty.\n");
    } else {
        printf("Elements in the list: ");
        for (int i = 0; i < list->size; i++) {
            printf("%d ", list->data[i]);
        }
        printf("\n");
    }
}

int main() {
    SequentialList list;
    initList(&list);
    insertElement(&list, 10);
    insertElement(&list, 20);
    insertElement(&list, 30);
    insertElement(&list, 40);
    insertElement(&list, 50);

    displayList(&list);
    int index = locateElement(&list, 30);
    if (index != -1) {
        printf("First occurrence of 30 is at index: %d\n", index);
    } else {
        printf("Element 30 not found in the list.\n");
    }
    int element = getElementAtIndex(&list, 2);
    if (element != -1) {
        printf("Element at index 2: %d\n", element);
    }
    deleteElement(&list, 30);
    displayList(&list);
    deleteElement(&list, 100);

    return 0;
}