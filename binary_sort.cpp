#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){ //n-1 passes
        for(int j=0;j<n-i-1;j++){ // iterate till n-i-1
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[]={64,34,25,12,22,11,90};
int n=9;
  bubble_sort(arr, n);
}
