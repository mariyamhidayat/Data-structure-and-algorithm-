#include <iostream>
using namespace std;
void quick_sort(int arr[], int p, int q);
int partition(int arr[], int p, int q);
int main(){
    int arr[10] = {50, 20, 90, 10, 30, 70, 40, 80, 60, 100};
    int n = 10;

    // Quick Sort implementation
    quick_sort(arr, 0, n - 1);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
void quick_sort(int arr[], int p, int q) {
    if (p < q) {
        int m = partition(arr, p, q);
        quick_sort(arr, p, m - 1);
        quick_sort(arr, m + 1, q);
    }
}
int partition(int arr[], int p, int q) {
    int pivot = arr[p]; // pivot
    int i=p; // 

    for (int j = p+1; j <= q; j++) {
        if (arr[j] <= pivot) {
            i++; 
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i ], arr[p]);
    return i ;
}