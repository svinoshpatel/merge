#include "sort.h"
#include <iostream>

int main()
{
	vector<int> arr = {3, 6, 1, 7, 9, 2, 8, 4, 5};

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;

	mergeSort(arr, 0, 8);

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;
}
