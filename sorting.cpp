//What is the purpose of the selectionSort function in the provided code, and how does it work?
#include <iostream>
using namespace std;

// Function to perform selection sort on an array
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the current index contains the minimum value
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update the minimum index if a smaller element is found
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]); // Swap the current element with the minimum element
        }
    }
}

int main() {
    int arr[] = {36, 66, 78, 32, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    selectionSort(arr, n); // Sort the array using selection sort

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/* Original array: 36 66 78 32 45 
Sorted array: 32 36 45 66 78 */