#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    ll n, count = 0;

    cin >> n;

    for (ll i = 5; n / i >= 1; i *= 5)
    {
        count += (n / i);
    }

    cout << count;
    return 0;
}
