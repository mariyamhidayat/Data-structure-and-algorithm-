#include <iostream>
using namespace std;
//struct Node me hum data + next ek hi unit me define kar sakte hain
//Linked list me struct har node ko represent karta hai.
//Node ka structure define karta hai → har element ke liye data + next pointer ready karta hai
struct Node{
    /* data */
    int data;
    Node*next;//next → pointer to next node (agar next node nahi hai to NULL).
};
class SinglyLinked{
private:
    Node* head;
public:
 SinglyLinked() { head = NULL;
 }
 void prepend(int value){
 Node* newNode = new Node();
newNode->data=value;
newNode->next=head;
head = newNode;


 }
 void append(int value) {
    Node* newNode = new Node(); // 1️⃣ Nayi node create karo
    newNode->data = value;      // 2️⃣ Data set karo
    newNode->next = NULL;
    
     if(head == NULL) {          // 4️⃣ Agar list empty hai
        head = newNode;         // Head nayi node ho jaati hai
        return;
    }

    Node* temp = head;          // 5️⃣ List me traverse karna start karo
    while(temp->next != NULL) { // Last node tak jao
        temp = temp->next;
    }

    temp->next = newNode;       // 6️⃣ Last node ka next nayi node point kare
 }
 void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    //searching

    void search(int value) {
    Node* temp = head;

    while(temp != NULL) {
        if(temp->data == value) {
            cout << "Value Found!" <<value <<endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Value Not Found!" << endl;
}



};

int main(){
SinglyLinked l;
l.prepend(10);
l.prepend(30);
l.prepend(00);
l.prepend(66);
l.append(100);
l.search(30);
l.display();


}

//| Term       | Hum kyu use karte hain                  | Kaam                                           |
// | ---------- | --------------------------------------- | ---------------------------------------------- |
// | **struct** | Node ko define karne ke liye            | Data + next pointer store karta hai            |
// | **class**  | Linked list ka container banane ke liye | Head pointer aur functions ko manage karta hai |
