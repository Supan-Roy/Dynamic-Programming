#include <bits/stdc++.h>
using namespace std;
int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n, a;
        cin >> n >> a;
        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
                cin >> c[i];
        }
        int dp[a + 1];
        dp[0] = 0;
        for (int i = 1; i <= a; i++)
        {
                dp[i] = a + 1;
        }
        for (int i = 1; i <= a; i++)
        {
                for (int x : c)
                {
                        if (i - x >= 0)
                        {
                                if (dp[i] > dp[i - x] + 1)
                                {
                                        dp[i] = dp[i - x] + 1;
                                }
                        }
                }
        }
        if (dp[a] > a)
        {
                cout << -1 << endl;
        }
        else
        {
                cout << dp[a] << endl;
        }
        return 0;
}