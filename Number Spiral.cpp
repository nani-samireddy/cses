#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    long long t;
    vector<long long> res;
    cin >> t;
    while (t)
    {

        long long base, big, small, diagonal;
        cin >> big;
        cin >> small;

        if (!(big >= small))
        {
            big += small;
            small = big - small;
            big -= small;
        }

        diagonal = (big - 1) * (big - 1);

        if (big % 2 == 0)
        {
            res.push_back(diagonal + (big - small));
        }
        else
        {
            res.push_back(diagonal - (big - small));
        }

        t--;
    }

    for (long long val : res)
    {
        cout << val << endl;
    }

    return 0;
}
