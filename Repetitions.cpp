#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long i = 0, j = 0, n, max_len = 1;
    string input_str;
    getline(cin, input_str);

    n = input_str.length();

    while (j < n)
    {
        if (input_str[i] == input_str[j])
        {
            max_len = max((j - i) + 1, max_len);
            j++;
        }
        else
        {
            i = j;
            j++;
        }
    }
    cout << max_len;

    return 0;
}
