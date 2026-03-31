 #include <iostream>
using namespace std;

#define MAX 5

class CircularQueue {
    int queue[MAX];
    int front, rear;

public:

    CircularQueue() {
        front = -1;
        rear = -1;
    }

    // Insert
    void enqueue(int value) {

        if ((rear + 1) % MAX == front) {
            cout << "Queue is Full\n";
            return;
        }

        if (front == -1) {
            front = 0;
        }

        rear = (rear + 1) % MAX;
        queue[rear] = value;

        cout << value << " inserted\n";
    }

    // Delete
    void dequeue() {

        if (front == -1) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Deleted: " << queue[front] << endl;

        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % MAX;
        }
    }

    // Display
    void display() {

        if (front == -1) {
            cout << "Queue Empty\n";
            return;
        }

        int i = front;

        cout << "Queue: ";

        while (true) {
            cout << queue[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % MAX;
        }

        cout << endl;
    }
};

int main() {

    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();

    q.dequeue();
    q.display();

    return 0;
}