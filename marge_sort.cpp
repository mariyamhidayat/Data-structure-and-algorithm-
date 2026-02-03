#include <iostream>
using namespace std;

void marge(int arr[], int p, int q, int r);

void marge_sort(int arr[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        marge_sort(arr, p, q);
        marge_sort(arr, q + 1, r);
        marge(arr, p, q, r);
    }
}

void marge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;// size of left sub-array
    int n2 = r - q;// size of right sub-array

    int L[n1], R[n2];// temporary arrays

    for (int i = 0; i < n1; i++)// copy data to temp arrays L[] and R[]
        L[i] = arr[p + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[q + 1 + j];

    int i = 0, j = 0, k = p;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}

int main() {
    int arr[10] = {50, 20, 90, 10, 30, 70, 40, 80, 60, 100};
    int n = 10;

    marge_sort(arr, 0, n - 1);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}