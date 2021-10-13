#include <iostream>

using namespace std;


void largeSmall(int arr[], int size)
{

	int large = 0;
        int small = 0;

	//for(int x: arr)
	for(int x = 0; x < size; x++)
	{
		if(arr[x] < small)
		{
			small = arr[x];
		}

		else if(arr[x] > large)
		{
			large = arr[x];
		}

	}

		cout << "Large: " << large << " Small: " << small << endl;
}
int main()
{
	

	
	int Array[7] = {5,-9,10,1,2,8,20};

	largeSmall(Array, 7);

	return 0;

}
