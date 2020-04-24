#include <bits/stdc++.h>
using namespace std;
#define MAXN 10005
vector<int> sieve;
void sv()
{
    for (int i = 0; i < MAXN; i++)
        sieve.push_back(i);
    for (int i = 4; i < MAXN; i += 2)
        sieve[i] = 2;
    for (int i = 3; i * i < MAXN; i++)
    {
        for (int j = i * i; j < MAXN; j++)
        {
            if (sieve[j] == j)
                sieve[j] = i;
        }
    }
}
int findfactors(int n)
{
    if (n == 1)
        return 1;
    int ans = 1;
    int dup = sieve[n];
    int c = 1;
    int j = c / sieve[n];
    while (j != 1)
    {
        if (sieve[j] == dup)
            c += 1;
        else
        {
            dup = sieve[j];
            ans = ans * (c + 1);
            c = 1;
        }
        j = j / sieve[j];
    }
    ans = ans * (c + 1);
    return ans;
}
int main()
{
    sv();
    int n = 0;
    cin >> n;
    cout << findfactors(n) << '\n';
    return 0;
}