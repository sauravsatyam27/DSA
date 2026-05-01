#include <iostream>
using namespace std;

int partition(int arr[], int left, int right) {
    int pivot = arr[left];
    int i = left;

    for (int j = left + 1; j <= right; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[left], arr[i]);
    return i;   
}

void quickSort(int arr[], int left, int right) {
    if (left >= right)
        return;

    int pi = partition(arr, left, right);
    quickSort(arr, left, pi - 1);
    quickSort(arr, pi + 1, right);
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
