#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    long long t;
    vector<long long> res;
    cin >> t;
    while(t){

        long long x,y,n, base;
        cin >> x;
        cin >> y;

        n = max(x,y);
        base = (n - 1) * (n - 1);

        if (n % 2 == 0) {
            if (y == n) res.push_back( base + x );
            else res.push_back( n * n - (y - 1) );
        } else {
            if (x == n) res.push_back(base + y);
            else res.push_back(n * n - (x - 1));
        }

        t--;
    }

    for( long long val : res ){
        cout << val << endl;
    }
    
    return 0;
}
