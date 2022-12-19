// given an array a frog can jump in either by one step or by the two step find out the maximum sum of energy
// required by the frog. the energy required to reach the ith index is the sum of the curr index energy and
// the ith index energy

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int jump(int n, vector<int> a)
{
    int energy = 0;
    if (n == 0 || n == 1)
    {
        return n;
    }

    int take = energy + a[n] + jump(n - 1, a);
    int nottake;
    if (n > 1)
        nottake = energy + 0 + jump(n - 2, a);

    return max(take, nottake);
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << jump(n - 1, a);
    return 0;
}