#include <bits/stdc++.h> using namespace std;
const int MAX_N = 1000;
const int MAX_W = 1000;
long long dp[MAX_N][MAX_W];
int main()
{
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n, W;
        cin >> n >> W;
        int w[MAX_N], v[MAX_N];
        for (int i = 1; i <= n; i++)
        {
                cin >> w[i] >> v[i];
        }
        for (int i = 1; i <= n; i++)
        {
                for (int j = 1; j <= W; j++)
                {
                        if (w[i] <= j)
                        {
                                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
                        }
                        else
                        {
                                dp[i][j] = dp[i - 1][j];
                        }
                }
        }
        cout << dp[n][W] << endl;
        return 0;
}