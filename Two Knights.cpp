#include <iostream>

using namespace std;

using ll = long long;

int main() {
    ll n;
    cin >> n;

    for (ll i = 1; i <= n; i++) {
        cout << (i * i) * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2) << endl;  // Valid placements
    }

    return 0;
}
