#ifndef BFS_H
#define BFS_H
#include <vector>

class Graph{
	private:
		int n; // number of vertices 
		std::vector< std::vector<int> > adjMat;
		std::vector<unsigned int> visited;
	
	public:
		Graph(int n);
		~Graph();
		void BSF(int);
		void add_edge(int,int);
		//void display(int s);

};

#endif 