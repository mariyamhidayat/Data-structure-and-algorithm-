#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(90);
    q.push(66);
    

    cout << "Front element: " << q.front() << endl; // Output: 10
    cout << "Back element: " << q.back() << endl;   // Output: 40

    // Dequeue an element
    q.pop();
    cout << "Front element after pop: " << q.front() << endl; 
    cout << "Size of queue: " << q.size() << endl; // Output: 3
    q.empty() ? cout << "Queue is empty\n" : 
    cout << "Queue is not empty\n"; // Output: Queue is not empty  

    return 0;
}