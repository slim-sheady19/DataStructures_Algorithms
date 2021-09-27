#include <iostream>
#include <vector>

using namespace std;

// A function to add an edge in an directed graph.
void addEdge(vector<int> adj[], int src, int dest)
{
	adj[src].push_back(dest);
}

// A function to print the adjacency list representation of graph
void printGraph(vector<int> adj[], int vertices)
{
	for (int i = 0; i < vertices; i++)
	{
		cout << "\n Adjacency list of vertex: "
			<< i;
		for (auto x : adj[i])
		cout << "-> " << x;
		printf("\n");
	}
}

int main()
{
	int V = 8;
	vector<int> adj[V];
	addEdge(adj, 3, 1);
	addEdge(adj, 3, 4);
	addEdge(adj, 4, 2);
	addEdge(adj, 4, 5);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 0);
	addEdge(adj, 0, 2);
	addEdge(adj, 6, 5);
	printGraph(adj, V);
	return 0;
}



/*******************************NOTES********************************************
 * 
 * 
 * 
 * 
 * 
 * ********************************************************************************/
