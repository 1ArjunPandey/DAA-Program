/*

This is dp program for fibonacci number

Here we use Tabulation method i.e iteration method
.
.
.
Note : The n which we are passing is on zero based indexing
.
.

*/


#include<bits/stdc++.h>
using namespace std;

class GFG{
	
	public:
	int fib(int n)
	{
	
	
		int f[n+1];
		int i;


		f[0] = 0;
		f[1] = 1;

		for(i = 2; i <= n; i++)
		{
			f[i] = f[i - 1] + f[i - 2];
		}
	
		return f[n-1];
		
	}
};


int main ()
{
	GFG g;
	int n = 9;
	
	cout << g.fib(n);
	return 0;
}

// This code is contributed by Pandey ji



