#include <iostream>
#include <numeric>
#include <vector>
#include <math.h>

using namespace std;
using ll = long long;
int main(int argc, char const *argv[])
{
    ll n, sum, fn;
    cin >> n;
    sum = (n * (n + 1)) / 2;
    fn = floor( n/2 ) * 2;
    if (sum&1)
    {
        cout << "NO";
        return 0;
    }
    vector<ll> f, s;
    for (ll i = 0; i < n / 2; i++)
    {
        if (i & 1)
        {
            f.push_back(i + 1);
            f.push_back(fn - i );
        }
        else
        {
            s.push_back(i + 1);
            s.push_back(fn - i );
        }
    }

    if (n & 1)
    {
        if (accumulate(f.begin(), f.end(), 0) > accumulate(s.begin(), s.end(), 0))
        {

            s.push_back(n);
        }
        else
        {
            f.push_back(n);
        }
    }

    cout << "YES" << endl;
    cout << f.size() << endl;
    for(ll val : f) {
        cout << val << " ";
    }
    cout << endl << s.size() << endl;
    for(ll val : s) {
        cout << val << " ";
    }
    return 0;
}
