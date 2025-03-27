#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        ll a, b;
        cin >> a;
        cin >> b;

        // Swap small to `a` and big to `b`.
        if (a > b)
        {
            a = a ^ b;
            b = a ^ b;
            a = a ^ b;
        }

        if (b > (a * 2) || (a + b) % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
