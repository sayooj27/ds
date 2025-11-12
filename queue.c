#include <stdio.h>
#include <stdlib.h>

#define MAX 5  
int queue[MAX];
int front = -1, rear = -1;

void enqueue() {
    int value;
    if (rear == MAX - 1) {
        printf("\nQueue Overflow! Cannot insert more elements.\n");
    } else {
        printf("Enter the value to insert: ");
        scanf("%d", &value);
        if (front == -1) front = 0;  // first element insertion
        queue[++rear] = value;
        printf("%d inserted into queue.\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("\nQueue Underflow! No elements to delete.\n");
    } else {
        printf("%d deleted from queue.\n", queue[front]);
        front++;
    }
}

void peek() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty.\n");
    } else {
        printf("Front element is: %d\n", queue[front]);
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty.\n");
    } else {
        printf("\nQueue elements are:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n----- Queue Menu -----\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Peek (Front Element)\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: 
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

