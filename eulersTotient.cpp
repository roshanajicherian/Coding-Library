//Program to find Euler's Totient function of a given number
//Euler's Totient function gives the number of co-primes of an inputted number n
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n = 0;
    cin >> n;
    int res = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res *= (i - 1);
            res /= i;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        res /= n;
    res *= (n - 1);
    cout << res << '\n';
}
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
        solve();
    return 0;
}