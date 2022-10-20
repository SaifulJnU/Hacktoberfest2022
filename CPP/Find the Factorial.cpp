#include <iostream>
using namespace std;

int main() {
    int n;
    int fac = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            fac *= i;
        }
        cout << "Factorial of " << n << " = " << fac;    
    }

    
}
