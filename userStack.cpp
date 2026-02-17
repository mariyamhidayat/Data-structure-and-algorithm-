#include <iostream>
// #include <stack>
using namespace std;
//global variables
 const int maxSize = 4;
int stack[maxSize];
int top = -1;
 void insertion(int value);
  void deletion();
  void updation(int value);

void display();
 void isempty();
int main() {
    insertion(10);
    insertion(20);  
    insertion(30);
    insertion(40);
    insertion(50);
    deletion();
    updation(100);//
    display();

    isempty();
    
    return 0;
}
void insertion(int value) {
    if (top == maxSize - 1) {
        cout << "Stack Overflow\n";
    } else {
        top=top+1;
        stack[top] = value;
        cout << value << " inserted into stack\n";
    }
}
void deletion(){
    if(top==-1){
        cout<< " stack is empty\n";
       }
       else{
        cout<< stack[top]<<" deleted from stack\n";
        top=top-1;
       }
}
void updation(int value){
    if(top==-1){
        cout<< " stack is empty\n";
       }
       else{
        stack[top]=value;
        cout<< " top element updated to "<<value<<"\n";
       }
}
void display(){
if(top==-1){
   cout<< " stack is empty\n";
}
else{
    for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
}

}
void isempty(){
    if(top==-1){
        cout<< " stack is empty\n";
       }
       else{
        cout<< " stack is not empty\n";
       }
}

// void isfull(){
//     if(top==maxSize-1){
//         cout<< " stack is full\n";
//        }
//        else{
//         cout<< " stack is not full\n";
//        }
// }



// void display(){
//     if(top==-1){
//         cout<< " stack is empty\n";
//        }
//        else{
//         cout<<" stack elements are: ";
//         for(int i=top;i>=0;i--){
//             cout<<stack[i]<<" ";
//         }
//         cout<<"\n";
//        }
// }
// void isFull(){
//     if(top==maxSize-1){  
//         cout<<" stack is full\n";}
//else{   
