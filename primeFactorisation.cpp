#include <bits/stdc++.h>
using namespace std;
#define MAXN 10000001
int sv[MAXN];
void sieve()
{
    sv[1] = 1;
    for (int i = 2; i < MAXN; i++)
        sv[i] = i;
    for (int i = 4; i < MAXN; i += 2)
        sv[i] = 2;
    for (int i = 3; i * i < MAXN; i++)
    {
        if (sv[i] == i)
        {
            for (int j = i * i; j < MAXN; j += i)
            {
                if (sv[j] == j)
                    sv[j] = i;
            }
        }
    }
}
vector<int> primeFactorise(int x)
{
    vector<int> res;
    while (x!=1)
    {
        res.push_back(sv[x]);
        x = x / sv[x];
    }
    return res;
}
int main()
{
    sieve();
    int x = 0;
    cin >> x;
    vector<int> res = primeFactorise(x);
    for (int i : res)
        cout << i << ' ';
    cout << '\n';

    return 0;
}