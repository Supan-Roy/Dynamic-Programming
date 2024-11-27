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

        vector<int> dp(a + 1, 0);
        dp[0] = 1;

        for (int x : c) 
        {
                for (int i = x; i <= a; i++)
                {
                        dp[i] += dp[i - x]; 
                }
        }

        cout << dp[a] << endl;
        return 0;
}