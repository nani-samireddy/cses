#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, total_moves=0, prev, cur;
    cin >> n;
    cin >> prev;
    for (long long i = 0; i < n - 1; i++)
    {
        cin >> cur;
        if ( cur < prev ) {
            total_moves +=  prev - cur;
            cur = prev;
        }
        prev = cur;
    }
    
    cout << total_moves;
    return 0;
}
