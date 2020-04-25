#include <bits/stdc++.h>
using namespace std;
#define MOD 100000007
typedef long long int lli;
lli fastPower(lli base, lli exponent)
{
    lli result = 1;
    base = base % MOD;
    if (base == 0)
        return base;
    while (exponent)
    {
        if (exponent & 1)
            result = (result * base) % MOD;
        exponent >>= 1;
        base = (base * base) % MOD;
    }
    return result;
}
int main()
{
    int base = 0, exponent = 0;
    cin >> base >> exponent;
    cout << fastPower(base, exponent) << '\n';
    return 0;
}