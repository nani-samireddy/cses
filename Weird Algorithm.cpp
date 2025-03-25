#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n = 0;
    cin >> n;

    cout << n;

    while (n != 1)
    {
        if (n & 1)
        {
            n = (n * 3) + 1;
        }
        else
        {
            n /= 2;
        }
        cout << " " << n;
    }

    return 0;
}
