// C++ program to find the minimum
// cost required to reach the n-th floor
#include <bits/stdc++.h>
using namespace std;

int fun(int n, vector<int>& cost, vector<int>& dp){

    if(n==1 || n == 0) return cost[n];

    if(dp[n] != -1) return dp[n];

    dp[n] = min(fun(n-1, cost, dp)+cost[n], fun(n-2, cost, dp)+cost[n]);

    return dp[n];
}





int minCostClimbingStairs(vector<int>& cost)
{
	int n = cost.size();
	vector<int> dp(n + 1, -1);
	int ans = min(fun(n - 2, cost, dp),
				fun(n - 1, cost, dp));
	return ans;
}


int main()
{
	vector<int> a{ 16, 19, 10, 12, 18 };
	cout << minCostClimbingStairs(a);
	return 0;
}
