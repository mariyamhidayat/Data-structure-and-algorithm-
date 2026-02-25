#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};
class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }
        //  Insert at Beginning (Prepend)
    void prepend(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = head;

        if(head != NULL) {
            head->prev = newNode;
        }

        head = newNode;
    }
     //  Insert at End (Append)
    void append(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL) {
            newNode->prev = NULL;
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }
       //  Display Forward
    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    //searchng
    void search(int value) {

    Node* temp = head;

    while(temp != NULL) {
        if(temp->data == value) {
            cout << "Value Found!" << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Value Not Found!" << endl;
}

void update(int oldValue, int newValue) {

    Node* temp = head;

    while(temp != NULL) {
        if(temp->data == oldValue) {
            temp->data = newValue;
            cout << "Value Updated!" << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Value not found!" << endl;
}
//bacword
void displayBackward() {

    if(head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    while(temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }

    cout << "NULL" << endl;
}

//delete
void deleteFromBeginning() {

    if(head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    head = head->next;

    if(head != NULL)
        head->prev = NULL;

    delete temp;
}

void deleteFromEnd() {

    if(head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    delete temp;
}

void deleteByValue(int value) {

    if(head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;

    while(temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    if(temp == NULL) {
        cout << "Value not found!" << endl;
        return;
    }

    if(temp == head) {
        deleteFromBeginning();
        return;
    }

    if(temp->next == NULL) {
        deleteFromEnd();
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;
}



};

int main(){

    DoublyLinkedList list;

    list.append(10);
    list.append(20);
    list.append(30);

    cout << "After Append: ";
    list.display();

    list.prepend(5);

    cout << "After Prepend: ";
    list.display();
    list.displayBackward();
    list.deleteByValue(10);
        list.display();
}