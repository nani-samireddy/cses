#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void hanoi(vector<pair<int, int>> &arr, int position, int from, int to, int aux)
{
    if (position == 1)
    {
        arr.push_back({from, to});
        return;
    }

    hanoi(arr, position - 1, from, aux, to);
    arr.push_back({from, to});
    hanoi(arr, position - 1, aux, to, from);
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;

    vector<pair<int, int>> res;

    hanoi(res, n, 1, 3, 2);
    cout << res.size() << endl;
    for (auto i : res)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
