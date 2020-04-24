//Program to find factorial of large numbers
#include <bits/stdc++.h>
#define MAXN 1000
using namespace std;
int multiply(int x, int res[], int res_size)
{
    int carry = 0, prod = 1;
    for (int i = 0; i < res_size; i++)
    {
        prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}
void findFactorial(int n)
{
    int res[MAXN];
    int res_size = 1;
    res[0] = 1;
    for (int i = 2; i <= n; i++)
        res_size = multiply(i, res, res_size);
    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
    cout << '\n';
}
int main()
{
    int n = 0;
    cin >> n;
    findFactorial(n);
    return 0;
}