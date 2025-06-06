#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int data) {
    if (top == MAX_SIZE - 1) {
        printf("Overflow stack!\n");
        return;
    }
    top++;
    stack[top] = data;
}

int pop() {
    if (top == -1) {
        printf("Empty stack!\n");
        return -1;
    }
    int data = stack[top];
    top--;
    return data;
}

void print_next_greater_element(int arr[], int n) {
    int i, next, element;
    push(arr[0]);

    for (i = 1; i < n; i++) {
        next = arr[i];
        if (top != -1) {
            element = pop();
            while (element < next) {
                printf("%d --> %d\n", element, next);
                if (top == -1) {
                    break;
                }
                element = pop();
            }
            if (element > next) {
                push(element);
            }
        }
        push(next);
    }
    while (top != -1) {
        element = pop();
        next = -1;
        printf("%d --> %d\n", element, next);
    }
}

int main() {
    int n =9;
    int i = 0;
    int arr[] = {3, 7, 5, 9, 3, 2, 4, 1, 4};
    printf("Elements in the array are: ");
    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nThe next larger elements are: \n");
    print_next_greater_element(arr, n);
    
    return 0;
}