#include <iostream>
using namespace std;

int main() {
    //terversal
   int arr[4]={10,20,30,40};
   for (int i = 0; i < 4;i++)
   {
    cout<<arr[i]<<endl;
   }
   // searching
    cout<< "searching "<<endl;
    int a[4]={10,20,30,40};
    int key=20;
   for (int i = 0; i < 4;i++)
    
   {
     if(key==a[i])
    {
    cout<< "founded at "<<a[i];
    }}
    // inseration
    cout<< "inseration "<<endl;
      int b[6]={10,20,30,40,60};
      int size=5;
      int pos=2;
      int value=100;
      for(int i=size;i>pos;i--){
        b[i]=b[i-1];
      }
      b[pos]=value;
      size++;
       for(int i = 0; i < size;i++)
   {
    cout<<b[i]<<endl;
   }
   //deletion
     cout<< "deletion "<<endl;
     int c[5]={10,20,30,40,60};
      int size1=5;
      int pos1=2;
      for(int i=pos;i<size1-1;i++){
        c[i]=c[i+1];
      }
      size1--;
       for(int i = 0; i < size1;i++)
   {
    cout<<c[i]<<endl;
   }


   
    return 0;
}
    