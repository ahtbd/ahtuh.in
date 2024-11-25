#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Job {
    char name[50];
    int pages;
    struct Job* next;
};

struct Queue {
    struct Job* front;
    struct Job* rear;
};

struct Job* newJob(char* name, int pages) {
    struct Job* job = (struct Job*)malloc(sizeof(struct Job));
    strcpy(job->name, name);
    job->pages = pages;
    job->next = NULL;
    return job;
}

void addJob(struct Queue* q, char* name, int pages) {
    struct Job* job = newJob(name, pages);

    if (q->rear == NULL) {
        q->front = q->rear = job;
        return;
    }

    q->rear->next = job;
    q->rear = job;
}

void processJob(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct Job* temp = q->front;
    printf("Processing job: %s (%d pages)\n", temp->name, temp->pages);
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);
}

void viewNextJob(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Next job: %s (%d pages)\n", q->front->name, q->front->pages);
}

int isQueueEmpty(struct Queue* q) {
    return q->front == NULL;
}

int main() {
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;

    addJob(q, "Document1", 10);
    addJob(q, "Document2", 5);
    addJob(q, "Document3", 15);

    viewNextJob(q);
    processJob(q);
    viewNextJob(q);

    return 0;
}