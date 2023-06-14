/*

This is dp program for fibonacci number

Here we use Memoization method i.e recursive method
.
.
.
Note : The n which we are passing is on zero based indexing
.
.

*/





#include <bits/stdc++.h>
using namespace std;

int term[1000];

int fib(int n)
{

	if (n <= 1)
		return n;


	if (term[n] != 0)
		return term[n];

	else {


		term[n] = fib(n - 1) + fib(n - 2);

		return term[n];
	}
}


int main()
{
	int n = 6;
	
	printf("%d", fib(n));
	
	return 0;
}

// This code is contributed by Pandey ji
