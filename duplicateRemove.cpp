#include <iostream>

using namespace std;


int remove(int arr[], int n)
{
	int index = 0;

	for(int i = 0; i < n; i++)
	{

	int j;
		for(j = 0; j < i; j++)
		{
			//cout << "i: " << i << " j: " << j << endl;
			if(arr[i] == arr[j])
				break;
		}

			if(j == i)
			{
				//cout << "i: " << i << "j: " << j << endl;
				arr[index++] = arr[i];
				cout <<"Index: " << index << endl;
			}
	}

	return n;
}


int main()
{
   int arr[]= {1,2,5,6,5,8,9};
   int n = sizeof(arr) / sizeof(arr[0]);

   n = remove(arr, n);

    cout << "Modified array is \n";
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

   return 0;
}
				 
