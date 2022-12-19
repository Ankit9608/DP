#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> dp(n, 1);
    vector<int> hash(n, 0);
    int index = 0;
    int maxi = 1;
    for (int i = 0; i < n; i++)
    {
        hash[i] = i;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] && dp[j] + 1 > dp[i])
            {
                dp[i] = dp[i] + 1;
                hash[i] = j;
            }
        }
        if (dp[i] > maxi)
        {
            maxi = dp[i];
            index = i;
        }
    }
    cout << maxi << endl;
    vector<int> ans;
    // for (auto &it : hash)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    ans.push_back(arr[index]);
    while (index != hash[index])
    {
        index = hash[index];
        ans.push_back(arr[index]);
    }
    // reverse(ans.begin(), ans.end());
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}