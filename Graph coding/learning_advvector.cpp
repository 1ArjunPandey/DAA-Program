#include<iostream>
#include<vector>

using namespace std;

int main()
{
	
	vector<vector<int>> a[9];
	vector<int> an, gn, dn, jj;
	an.push_back(12);
	an.push_back(42);
	an.push_back(13);
	
	gn.push_back(126);
	gn.push_back(125);
	gn.push_back(142);
	
	dn.push_back(33);
	dn.push_back(22);
	dn.push_back(41);
	
	jj.push_back(66);
	jj.push_back(62);
	jj.push_back(59);
	
	a[0].push_back(an);
	a[0].push_back(gn);
	a[0].push_back(dn);
	
	cout<<a[0][1][1];
	
	
	return 0;
}
