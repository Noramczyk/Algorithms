#include <iostream>

using namespace std;

void sameCharString(string &str, int s)
{
	char First, Second;

	for (int x = 0; x < s; x++)
	{
		First = str[x];

		for(int y = x + 1; y < s; y++)
		{
			Second = str[y];

			if(First == Second)
			{
				cout << First << " - " << Second << endl;
			}
		}
	}

}


int main()
{

	string myStr = " abcdassd";

	int S = myStr.length();

	sameCharString(myStr, S);

}
