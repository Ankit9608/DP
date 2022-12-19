// tabulation
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int fibbo(int n)
{
    // cout << "hi" << endl;
    vector<int> a(n + 1);
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
        // cout << "hi2" << endl;
    }
    return a[n - 1];
}
int main()
{
    int n;
    cin >> n;
    cout << fibbo(n);
    return 0;
}

// 0 1 1 2 3 5 6