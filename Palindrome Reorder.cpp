#include <iostream>
#include <map>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[])
{
    string src;
    getline(cin, src);

    map<char, int> freq;

    for (auto c : src)
    {
        freq[c]++;
    }
    string s = "", m = "", e = "";
    bool isOddCompleted = false;
    for (auto f : freq)
    {
        if (f.second & 1)
        {
            if (isOddCompleted)
            {
                cout << "NO SOLUTION" << endl;
                return 0;
            }

            m += f.first;
            f.second--;
            isOddCompleted = true;
        }

        s.insert(s.end(), f.second / 2, f.first);
        e.insert(e.begin(), f.second / 2, f.first);
    }

    cout << s + m + e << endl;

    return 0;
}
