#include <iostream>

using namespace std;


void reverse(int arr[], int start, int end)
{


	while(start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;

	}



}

void printRev(int arr[], int size)
{
	for(int y = 0; y < size; y++)
	{
		cout << arr[y] << " ";
	}

	cout << " " << endl;

}
int main()
{


	int arrSize = 10;
	int array[arrSize] = {1,2,3,4,5,6,7,8,9,10};

	reverse(array, 0, arrSize - 1);
	printRev(array, arrSize);

	return 0;
}
