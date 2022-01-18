#include <iostream>

using namespace std;

string Palindrome(string S)
{

	for(int i = 0; i < S.length() / 2; i ++)
	{
		if(S[i] != S[S.length() - i - 1])
		{
			return "No";
		}
	}

	return "Yes";

}

int main()
{
	string S = "ABBA";
	cout << Palindrome(S);
	cout << endl;

	return 0;
}
