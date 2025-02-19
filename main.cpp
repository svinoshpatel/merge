#include "sort.h"
#include <iostream>

int main() {
    vector<int> arr;
    int n, temp;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "Original array: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
