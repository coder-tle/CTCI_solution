#include<bits/stdc++.h>
using namespace std;




void addEdge(vector<int> adj[], int u, int v){
	
	adj[u].push_back(v);
}

// V is number of nodes of graph
void printGraph(vector<int> adj[], int V){
	for(int v = 0; v<V; v++){
		cout<<"\nAdjacency list of vertex "<<v<<"\n head ";
		
		for(auto x : adj[v])
			cout<<"->"<<x;
		cout<<endl;
	}
}


void dfs(vector<int> adj[], bool visited[], int node, int target){
		
		visited[node] = true;
		
		if(node == target){
		cout<<"Route exisit between the two nodes\n";
		return ;
		}
		for(auto i : adj[node]){
			if(visited[i] == false)
				dfs(adj, visited, i, target);
		}
}

/*struct Node {
	int data;
	struct Node * left;
	struct Node * right;
	
	Node(int val){
		data = val;
		left = NULL;
		right = NULL;
	}
};*/




int main(){
	
	int V = 8; // number of nodes of graph
	
	vector<int> adj[V];
	//addEdge(adj, 0, 1);
	addEdge(adj, 1, 2);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	addEdge(adj, 3, 7);
	addEdge(adj, 7, 6);
	addEdge(adj, 5, 1);
	
	addEdge(adj, 5, 2);
	
	
	printGraph(adj, V);
	
	bool visited[V] = {false};
	
	dfs(adj, visited, 7, 6);
	
    //	for(int i = 0; i<V; i++)
	//	cout<<visited[i]<<" " ;
	//struct Node * root  = new Node(1);
	
	return 0;
}
