/*


---------------------------------here making matrix representation of graph-----------------------------------

input are



4
0 0 0 0 0
0 0 0 1 1
0 1 0 0 1
0 1 0 1 0
0 1 1 1 1



*/


#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	
	int a[n+1][n+1];
	
	for(int i = 0; i<=n; i++)
	{
//------------------------------------------Initilize this with zero first------------------------------------


		for(int j = 0; j<=n; j++){                     
			a[i][j] = 0;
		}
	}
	
//--------------------------------------Taking value and putting in matrix-----------------------------

	for(int i = 0; i<=n; i++) {
		for(int j = 0; j<=n; j++)
		{
			int k;
			cin >> k;
			a[i][j] = k;
		}
	}
//-----------------------------------------------Simply printing it on screen---------------------------------------

	for(int i = 0; i<=n; i++)
	{
		for(int j = 0; j<=n; j++){
			cout<< a[i][j] << " ";
		}
		cout<<endl;
	}	
	return 0;
}
