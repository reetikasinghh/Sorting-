//What is the purpose of the insertionSort function in the provided code, and how does it work?
#include <iostream>
using namespace std;

// Function to perform insertion sort on an array
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift elements to the right to create space for key
            j--;
        }
        arr[j + 1] = key; // Place the key in the correct position in the sorted part of the array
    }
}

int main() {
    int arr[] = {36, 66, 78, 32, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    insertionSort(arr, n); // Sort the array using insertion sort

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}/* output 
Original array: 36 66 78 32 45 
Sorted array: 32 36 45 66 78  */