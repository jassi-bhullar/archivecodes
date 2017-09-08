#include <bits/stdc++.h>
using namespace std;

void displayBFS(vector<int> g[], int n, int x) {
	bool visited[n];
	for (int i = 0; i < n; ++i)
	{
		visited[i] = false;
	}

	list<int> queue; // BFS
	queue.push_back(x);
	visited[x] = true;
	int tmp;

	while(!queue.empty()){
		tmp = queue.front();
		cout << tmp << " ";
		queue.pop_front();

		for(vector<int>::iterator it=g[tmp].begin(); it != g[tmp].end(); it++){
			if(!visited[*it]){
				queue.push_back(*it);
				visited[*it] = true;
			}
		}
	}
	cout << endl;
}

void displayDFS(vector<int> g[], int n, int x) {
	bool visited[n];
	for (int i = 0; i < n; ++i)
	{
		visited[i] = false;
	}

	list<int> stack; // BFS
	stack.push_back(x);
	visited[x] = true;
	int tmp;

	while(!stack.empty()){
		tmp = stack.back();
		cout << tmp << " ";
		stack.pop_back();

		for(vector<int>::iterator it=g[tmp].begin(); it != g[tmp].end(); it++){
			if(!visited[*it]){
				stack.push_back(*it);
				visited[*it] = true;
			}
		}
	}
	cout << endl;
}

void addEdges(vector<int> g[], int edges, int x[], int y[], int weights[], bool directed){
	//undirected graph
	for (int i = 0; i < edges; ++i)
	{
		g[x[i]].push_back(y[i]);
		if(!directed)
			g[y[i]].push_back(x[i]);	
	}
}

int main(){
	int n = 11;
	vector<int> g[n];

	int initialIndex = 3;
	
	// tree to check BFS
	int edges = 10;
	int x[] = {3, 3, 5, 5, 7, 9, 4, 4, 2, 8};
	int y[] = {5, 4 ,6 ,7, 9,10, 2, 1, 8, 0};
	int w[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

	addEdges(g, edges, x, y, w, false);
	
	displayDFS(g, n, initialIndex);

	return 0;
}