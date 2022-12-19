#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int cur = n - 1; cur >= 0; cur--)
    {
        for (int prev = cur - 1; prev >= -1; prev--)
        {
            int len = 0 + dp[cur + 1][prev + 1];
            if (a[cur] > a[prev] || prev == -1)
            {
                len = max(len, 1 + dp[cur + 1][cur]);
                dp[cur][prev + 1] = len;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}