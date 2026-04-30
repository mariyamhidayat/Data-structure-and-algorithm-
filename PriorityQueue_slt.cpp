#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> pq;   // Max Priority Queue
    // priority_queue<int, vector<int>, greater<int>> pq;//min priority queue


    // Insert elements
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    cout << "Top element: " << pq.top() << endl;

    cout << "Priority Queue elements: ";

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}