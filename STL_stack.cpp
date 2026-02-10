#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>numbers;
    //pushing elements into the stack
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    numbers.push(40);
    numbers.push(50);
    numbers.push(60);
     numbers.push(70);
    int top = numbers.top();
    //displaying the top element of the stack
    cout<<"Top element: \n"<<top<<endl;
    //popping the top element from the stack
    numbers.pop();
    cout<<"Popped element: \n"<<numbers.top()<<endl;
    //checking the size of the stack
    cout<<"Size of stack: \n"<<numbers.size()<<endl;
    //checking if the stack is empty   
     cout<<"Is stack empty? \n"<<numbers.empty()<<endl;
     if(numbers.empty()){
        cout<<"Stack is empty\n";
        }else{
            cout<<"Stack is not empty\n";
        }

} 