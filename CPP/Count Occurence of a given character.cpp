// C++ program to count occurrences of a given character
#include <iostream>
#include <string>
using namespace std;

// Function that return count of the given character in the string
int count(string s, char c)
{
    // Count variable
    int counter = 0;

    for (int i = 0; i < s.length(); i++)

        // checking character in string
        if (s[i] == c)
            counter++;

    return counter;
}

int main()
{
    string str = "geeksforgeeks";
    char c = 'e';
    cout << count(str, c) << endl;
    return 0;
}
