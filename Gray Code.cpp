#include <iostream>
#include <bitset>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;

    for (int i = 0; i < 1 << n; i++)
    {
        int val = i ^ (i >> 1);
        bitset<32> bits(val);
        string res = bits.to_string().substr(32 - n);
        cout << res << endl;
    }

    return 0;
}
