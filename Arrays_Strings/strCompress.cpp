#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void compress_str(string str)
{


int j=0;
    for (int i = 0; i < str.length(); i++) {

        int count = 0;
        while (i < str.length() - 1 && str[i] == str[i + 1])	// while condition increment
	{
            count++;
            i++;
        }

        count==0 ?cout<<str[i] : cout << str[i] << count;  	// if count = 0 then print just the string letter
       							   	// else print the letter and count

    }
}

int main()
{
    string str = "abcdddddef";
    compress_str(str);
    return 0;
}
