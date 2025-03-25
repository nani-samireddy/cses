#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Handle the base cases
    if (n == 1) {
        cout << "1" << endl;
        return 0;
    }
    if (n <= 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    // Print even numbers first
    for (long long i = 2; i <= n; i += 2) {
        cout << i << " ";
    }

    // Then print odd numbers
    for (long long i = 1; i <= n; i += 2) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
