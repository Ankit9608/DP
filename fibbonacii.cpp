// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int fibbo(int n)
// {
//     vector<int> dp(n + 1, -1);
//     if (n == 0 || n == 1)
//     {
//         dp[n] = n;
//         return dp[n];
//     }
//     if (dp[n] != -1)
//     {
//         return dp[n];
//     }
//     return dp[n - 1] = fibbo(n - 1) + fibbo(n - 2);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fibbo(n);
//     return 0;
// }
// // 0 1 1 2 3 5

// space O(1) time== O(n);
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fibbo(int n)
{
    int curr, pre = 1, prev2 = 0;
    for (int i = 2; i < n; i++)
    {
        curr = pre + prev2;
        prev2 = pre;
        pre = curr;
    }
    return curr;
}
int main()
{
    int n;
    cin >> n;
    cout << fibbo(n);
    return 0;
}
// 0 1 1 2 3 5