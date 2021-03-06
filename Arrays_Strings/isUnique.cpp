#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool uniqueCharacters(string str)
{

    // Using sorting
    sort(str.begin(), str.end());

    for (int i = 0; i < str.length()-1; i++) {

        // if at any time, 2 adjacent
        // elements become equal,
        // return false
        if (str[i] == str[i + 1]) {
            return false;
        }
    }
    return true;
}

// driver code
int main()
{

    string str = "LukeNoramczyk";

    if (uniqueCharacters(str)) {
        cout << "The String " << str
             << " has all unique characters\n";
    }
    else {

        cout << "The String " << str
             << " has duplicate characters\n";
    }
    return 0;
}
// This code is contributed by Divyam Madaan
