//What does this program do, and how does it work?
//How do you choose the sorting algorithm to sort the given array?
//Can you explain the differences between the three sorting 
//algorithms (Selection Sort, Insertion Sort, and Bubble Sort) implemented in this program?
#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice;
    cout << "Choose a sorting algorithm:" << endl;
    cout << "1. Selection Sort" << endl;
    cout << "2. Insertion Sort" << endl;
    cout << "3. Bubble Sort" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            selectionSort(arr, n);
            break;
        case 2:
            insertionSort(arr, n);
            break;
        case 3:
            bubbleSort(arr, n);
            break;
        default:
            cout << "Invalid choice." << endl;
            return 1;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/* output: 
Enter the number of elements in the array: 6
Enter 6 elements of the array: 12
45
11
63
96
88
Choose a sorting algorithm:
1. Selection Sort
2. Insertion Sort
3. Bubble Sort
Enter your choice: 3
Sorted array: 11 12 45 63 88 96 */
