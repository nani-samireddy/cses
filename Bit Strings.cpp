#include <iostream>

using namespace std;

using ll = long long;

int main(int argc, char const *argv[])
{
    ll n, x = 1;
    cin >> n;

    const ll MOD = 1000000007;

    for (ll i = 0; i < n; i++)
    {
        x *= 2;
        x %= MOD;
    }

    cout << x;

    return 0;
}
