//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


int dp[100][100];

class Solution{
// Function for matrix chain multiplication
public:
    int matrixChainMemoised(int p[], int i, int j)
    {
    	if (i == j)
    	{
            return 0;
    	}
    	
    	if (dp[i][j] != -1)
    	{
    		return dp[i][j];
    	}
    	
    	dp[i][j] = INT_MAX;
    	
    	for (int k = i; k < j; k++)
    	{
    		dp[i][j] = min(dp[i][j], matrixChainMemoised(p, i, k) + matrixChainMemoised(p, k + 1, j)
    					+ p[i - 1] * p[k] * p[j]);
    	}
    	return dp[i][j];
    }
    

    int matrixMultiplication(int n, int arr[])
    {
	    int i = 1, j = n - 1;
	    return matrixChainMemoised(arr, i, j);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends
