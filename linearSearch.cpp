#include <iostream>
using namespace std;
int main() {
    //creation
    int a[5]={10,20,30,40,50};

    int local=-1;
    int key=40;
    for(int i=0;i<5;i++){
        if(key==a[i]){
            local=i;
            cout<<"founded "<<a[i]; 
            break;
        }
        
        
    }
    if(local==-1){
        cout<<"not found";
    }
}