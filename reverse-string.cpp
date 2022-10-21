#include <iostream>
using namespace std;

// Function to reverse a string
void reverse(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
}
 
// Driver code
int main(void)
{
    string s = "AslamHossain";
    reverse(s);
    return (0);
}