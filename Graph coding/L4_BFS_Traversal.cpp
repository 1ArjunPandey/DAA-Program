//-------------------------------------------C++ code to print BFS traversal from a given--------------------------------------

// This class represents a directed graph using
// adjacency list representation


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
		vector<int> BFS(int s);
};

Graph::Graph(int V)
{
	this->V = V;
	adj.resize(V);
}

void Graph::addEdge(int v, int w)
{
	// Add w to v’s list.
	adj[v].push_back(w);
}

vector<int> Graph::BFS(int s)
{
	// Mark all the vertices as not visited
	vector<int> visited;
	visited.resize(V, false);
	vector<int> bfs;

	// Create a queue for BFS
	queue<int> q;

	// Mark the current node as visited and enqueue it
	visited[s] = 1;
	q.push(s);

	while (!q.empty()) {
		
		// Dequeue a vertex from queue and print it
		s = q.front();
		bfs.push_back(s);
		q.pop();

		// Get all adjacent vertices of the dequeued
		// vertex s. If a adjacent has not been visited,
		// then mark it visited and enqueue it
		
		for (auto i : adj[s]) {
			if (!visited[i]) {
				visited[i] = 1;
				q.push(i);
			}
		}
	}
	
	return bfs;
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

	cout << "Following is Breadth First Traversal "
		<< "(starting from vertex 2) \n";
	vector<int> bfs;
	bfs = g.BFS(2);
	
	for(int i : bfs) {
		cout << i << " ";
	}

	return 0;
}

