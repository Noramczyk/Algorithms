#include <iostream>


using namespace std;

void sumOfTwo(int arr[], int size)
{

	int First = 0;
	int Second = 0;
	int sum = 7;

	for(int x = 0; x < size; x++)
	{
		First = arr[x];

		for(int y = x + 1; y < size; y++)
		{
			Second = arr[y];

			if(sum == (First + Second))
			{
				cout << "(" << First << "," << Second << ")" << endl;
			}
		}
	}

}


int main()
{

	int arrSize = 10;
	int ARR[arrSize] = {5,2,6,8,4,1,3,9,8,5};


	sumOfTwo(ARR, arrSize);

	return 0;
}
