#include <iostream>
#include <bitset>

using namespace std;
using ll = long long;

int rev_g(int g)
{
    int n = 0;
    for (; g; g >>= 1)
        n ^= g;
    return n;
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;

    for (int i = 0; i < 1 << n; i++)
    {
        int val = i ^ (i >> 1);
        bitset<32> bits(val);
        string res = bits.to_string().substr(32-n);
        cout << res << endl;
    }

    return 0;
}
