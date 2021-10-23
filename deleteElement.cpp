#include <iostream>

using namespace std;

int deleteElement(int arr[], int n, int x)
{
	int i;

	for(i = 0; i < n; i++)
		if (arr[i] == x)
			break;


	if(i < n)				// If found! 
	{
		n = n - 1;			// decrease size & return

		for(int j = i; j < n; j++)	// Starting at arr[] place where x found
		{
			arr[j] = arr[j + 1]; 	// Jump to next position in Array
		}
	}

	return n;

}

int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;

    // Delete x from arr[]
    n = deleteElement(arr, n, x);

    cout << "Modified array is \n";
    for (int i=0; i<n; i++)
    cout << arr[i] << " ";

    return 0;
}



