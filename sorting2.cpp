//What is the purpose of the bubbleSort function in the provided code, and how does it work?
#include <iostream>
using namespace std;

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); // Swap elements if they are in the wrong order
            }
        }
    }
}

int main() {
    int arr[] = { 90,56,78,22,63,44};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, n); // Sort the array using bubble sort

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/* Output: 
Original array: 90 56 78 22 63 44 
Sorted array: 22 44 56 63 78 90  */