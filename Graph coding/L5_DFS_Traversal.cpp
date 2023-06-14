/*

-------------------------------------------C++ code to print DFS traversal from a given--------------------------------------

 This class represents a directed graph using
 adjacency list representation
 
 
*/

#include <bits/stdc++.h>
using namespace std;


class Graph {

	// No. of vertices
	int V;

	// Pointer to an array containing adjacency lists
	vector<list<int> > adj;

	public:
		// Constructor
		Graph(int V);

		// Function to add an edge to graph
		void addEdge(int v, int w);

		// Prints BFS traversal from a given source s
		void DFS(int s, vector<int>&, vector<int>&);
};

Graph::Graph(int a)
{
	V = a;
	adj.resize(V);
}

void Graph::addEdge(int v, int w)
{
	// Add w to v’s list.
	adj[v].push_back(w);
}

void Graph::DFS(int s, vector<int> &vis, vector<int> &dfs)
{
	vis[s] = 1;
	dfs.push_back(s);


	for (auto i : adj[s]) {
		if (!vis[i]) 
		{
			DFS(i, vis, dfs);
			
		}
	}

}

// Driver code
int main()
{
	// Create a graph given in the above diagram
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Depth First Traversal "
		<< "(starting from vertex 2) \n";
	vector<int> dfs;
	vector<int> vis(4, 0);
	
	
	g.DFS(2, vis, dfs);
	
	for(int i : dfs) {
		cout << i << " ";
	}
	
	

	return 0;
}

