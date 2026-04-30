#include <iostream>
using namespace std;

# define MAX 100

class PriorityQueue {
    int heap[MAX];
    int size;

public:
 
    PriorityQueue() {
        size = 0;
    }

    void insert(int value) {
        size++;
        heap[size] = value;

        int i = size;

        while (i > 1 && heap[i] > heap[i/2]) {
            swap(heap[i], heap[i/2]);
            i = i / 2;
        }
    }

    void deleteMax() {
        if (size == 0) {
            cout << "Queue Empty\n";
            return;
        }

        cout << "Deleted element: " << heap[1] << endl;

        heap[1] = heap[size];
        size--;

        int i = 1;

        while (true) {
            int left = 2 * i;
            int right = 2 * i + 1;
            int largest = i;

            if (left <= size && heap[left] > heap[largest])
                largest = left;

            if (right <= size && heap[right] > heap[largest])
                largest = right;

            if (largest != i) {
                swap(heap[i], heap[largest]);
                i = largest;
            }
            else
                break;
        }
    }

    void display() {
        for (int i = 1; i <= size; i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    PriorityQueue pq;

    pq.insert(20);
    pq.insert(40);
    pq.insert(10);
    pq.insert(30);

    cout << "Priority Queue: ";
    pq.display();

    pq.deleteMax();

    cout << "After deletion: ";
    pq.display();

    return 0;
}