// fibonachi with dp
// memorization
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int fibbo(int n, vector<int> &a)
{
    if (a[n] != -1)
    {
        return a[n];
    }
    if (n == 1 || n == 0)
    {
        return a[n] = n;
    }
    return a[n] = fibbo(n - 1, a) + fibbo(n - 2, a);
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1, -1);
    cout << fibbo(n, a);
    return 0;
}