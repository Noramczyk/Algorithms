#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int i, j;

	char *str = "Jacobians";
	//string = "Jacobians;

	cout << "Duplicate letters: " << endl;
	
	for(i = 0; i < strlen(str); i++)
	{
		for(j = i + 1; j < strlen(str); j++)
		{
			if(str[i] == str[j])
			{
				cout << str[i] << endl;
				break;
			}
		}
	}
return 0;
}
	
