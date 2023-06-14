/*

This is matrix chain multiplication using tabulation method i.e iteration approach

this is sample test case


1
4
10 30 5 60

output : 4500


1
5
5 4 6 2 7

output : 158



*/


#include <bits/stdc++.h>
using namespace std;



class Solution{
public:
    int matrixMultiplication(int N, int p[])
    {
 
        int m[N][N];
    
        int i, j, k, L, q;
    

        for (i = 1; i < N; i++)
            m[i][i] = 0;
    
        
        for (L = 1; L < N-1; L++)
        {
            for (i = 1; i < N -L; i++)
            {
                j = i + L;
                m[i][j] = INT_MAX;
                for (k = i; k <= j - 1; k++)
                {

                    q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                    
                    if (q < m[i][j])
                        m[i][j] = q;
                }
            }
        }
    
        return m[1][N - 1];    
        
    }
};



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


// This code it written by pandey ji
