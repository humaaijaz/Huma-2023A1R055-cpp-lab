#include <iostream>
using namespace std;

// Function for Linear Search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

// Function for Binary Search (Array must be sorted)
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1; // Return -1 if not found
}

int main() {
    int arr[100];
    for (int i = 0; i < 100; i++) {
        arr[i] = i + 1;
    }

    int key;
    cout << "Enter a number to search (1-100): ";
    cin >> key;

    // Linear Search
    int linearResult = linearSearch(arr, 100, key);
    if (linearResult != -1)
        cout << "Linear Search: Number found at index " << linearResult << endl;
    else
        cout << "Linear Search: Number not found" << endl;

    // Binary Search
    int binaryResult = binarySearch(arr, 0, 99, key);
    if (binaryResult != -1)
        cout << "Binary Search: Number found at index " << binaryResult << endl;
    else
        cout << "Binary Search: Number not found" << endl;
    
    return 0;
}