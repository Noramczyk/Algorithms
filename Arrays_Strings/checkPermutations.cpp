#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPerm(string strOne, string strTwo)
{
	int a = strOne.length();
	int b = strTwo.length();

	if(a != b)
		return false;

	sort(strOne.begin(), strOne.end());
	sort(strTwo.begin(), strTwo.end());

	for(int i = 0; i < a; i++)
		if(strOne[i] != strTwo[i])
			return false;

	return true;

}

int main()
{
	string strOne = "santa";
	string strTwo = "tansa";

	if(isPerm(strOne, strTwo))
		cout << "Yes" << endl;

	else
		cout << "No" << endl;

	return 0;
}
