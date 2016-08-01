
#include <iostream>
#include "Graph.h"
#include <vector>
#include <list>

using namespace std;

Graph::Graph(int n){
			n = n; 
			adjMat.resize(n);
			visited.resize(n);
			// Here i want to create an array of size v
			std::cout << " The number of vertex here is n is " << n << std::endl;
}

Graph::~Graph(){}

void Graph::add_edge(int v,int w){

        adjMat[v].push_back(w);
}

void Graph::BSF(int s){
	// n is number of nodes in graph and s is root point
	//int visited[0];	// keep track of visited node
	for(auto i : visited){ // Initialize all nodes as unvisited
		i = false;
	}

	list<int> Q;
	visited[s] = true;
	//prev[s] = -1;
	Q.push_back(s);
	

	while(!Q.empty()){	//While there are more nodes to visit
		int current = Q.front();

		cout << " The first vertex is " << current << endl;
		Q.pop_front();

		for(auto it : adjMat[current]){

			if(!visited[it]){
				visited[it] = true;
				Q.push_back(it);
			}
		}
	}

}