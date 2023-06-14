
#include<bits/stdc++.h>
using namespace std;


class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        vector<int> vis(V, 0);
        
        q.push({0, 0});
        int sum = 0;
        
        
        while(!q.empty()) {
            
            auto it = q.top();
            q.pop();
            
            int node = it.second;
            int wt = it.first;
            
            if(vis[node]){continue;}
            
            
            vis[node] = 1;
            sum += wt;
            
            for(auto i : adj[node]) {
                
                
                int ins_node = i[0];
                int ins_wt = i[1];
                
                if(!vis[ins_node]) {
                    
                    q.push({ins_wt, ins_node});
                }
                                
            }
            
        }
        
        return sum;
    }
    
};


int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

/* Test case

1
3 3
0 1 5
1 2 3
0 2 1


*/

