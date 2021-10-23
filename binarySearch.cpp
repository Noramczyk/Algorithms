#include <iostream>

using namespace std;

int binarySearch(int arr[], int begin, int stop, int val)
{
	if(stop >= begin)
	{
		int mid = begin + (stop - begin) / 2;

		if(arr[mid] == val)
			return mid;

		if(arr[mid] > val)
			return binarySearch(arr, begin, mid - 1, val);

		return binarySearch(arr, mid + 1, stop, val);
	}

	return -1; 	// when element is not in Array
}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    //int n = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
    int result = binarySearch(arr, 0, n - 1, x);

    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result << endl;
    return 0;
}
