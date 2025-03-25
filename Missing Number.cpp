#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, size, sum = 0, temp;
    cin >> n;
    size = n;
    size--;
    while (size--)
    {
        cin >> temp;
        sum += temp;
    }
    cout << ((n * (n + 1)) / 2) - sum;
    return 0;
}
