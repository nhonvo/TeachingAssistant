#include <iostream>
using namespace std;

int GetElementOfSortedArray2(int value, int arr[], int low, int high)
{
	if (low > high)
		return -1;
	int mid = (low + high) / 2;
	if (arr[mid] == value)
		return arr[mid];
	else if (arr[mid] > value)
		return GetElementOfSortedArray2(value, arr, low, mid - 1);
	else
		return GetElementOfSortedArray2(value, arr, mid + 1, high);
}
int GetElementOfSortedArray1(int value, int arr[], int low, int high)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (arr[mid] == value)
			return arr[mid];
		else if (arr[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 10, 15, 16, 17, 18, 19, 20, 21, 25};
	int high = sizeof(arr) / sizeof(int) - 1;
	cout << "Result 1 :" << GetElementOfSortedArray1(5, arr, 0, high) << endl;
	cout << "Result 2 :" << GetElementOfSortedArray2(5, arr, 0, high);
}
