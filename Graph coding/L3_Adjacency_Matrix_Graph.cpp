/*
----------------------------------adjacency  form of graph-----------------------------------------

input are


4 5
1 2
2 3
4 3
1 4
3 1




*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int v, e;
	cin >> v >> e;
	
	vector<int> g[v+1];
	
	
	
	for(int i = 0; i<e; i++)
	{
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);	
		
	}


//------------------cross check detail--------------------------

	cout<<g[4][0];	
	return 0;
}
