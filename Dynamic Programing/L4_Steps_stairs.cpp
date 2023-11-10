// C++ program to count number of ways to reach Nth stair 
#include <bits/stdc++.h> 
using namespace std; 

//recursive function to find number of ways to 

int fun(int n, vector<int> &dp){
    if(n <= 1) return 1;
    if(dp[n] != -1) return dp[n];
    dp[n] = fun(n-1, dp) + fun(n-2, dp);
    return dp[n];
}


int main() 
{ 
	int n = 20; 
	vector<int> dp(n+1, -1); 
	cout << "Number of ways = " << fun(n, dp); 
	return 0; 
}
