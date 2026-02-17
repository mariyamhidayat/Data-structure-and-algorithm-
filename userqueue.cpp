#include <iostream>
using namespace std;

int Size = 10;
int queue[10];
int front = 0;
int rear = -1;

// Function prototypes
bool isEmpty();
bool isFull();
void enqueue(int user);//
void dequeue();
void update(int index, int newUser);
void display();
void peek();

int main() {
    enqueue(10);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    enqueue(15);
    enqueue(16);

    display();

    peek();

    dequeue();
    display();

    update(2, 99); // Update 3rd element (index 2)
    display();

    return 0;
}

// Check if queue is empty
bool isEmpty() {
    return front > rear;
}

// Check if queue is full
bool isFull() {
    return rear == Size - 1;
}

// Insert element (Enqueue)
void enqueue(int user) {
    if (isFull()) {
        cout << "Queue Overflow! Cannot add " << user << endl;
    } else {
        rear++;
        queue[rear] = user;
        cout << "Enqueued: " << user << endl;
    }
}

// Delete element (Dequeue)
void dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow! No users to remove." << endl;
    } else {
        cout << "Dequeued: " << queue[front] << endl;
        front++;
    }
}

// Update element at index
void update(int index, int newUser) {
    if (index < front || index > rear) {
        cout << "Invalid index! Cannot update." << endl;
    } else {
        cout << "Updated: " << queue[index] << " -> " << newUser << endl;
        queue[index] = newUser;
    }
}

// Display queue
void display() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

// Peek front element
void peek() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Front User: " << queue[front] << endl;
    }
}
