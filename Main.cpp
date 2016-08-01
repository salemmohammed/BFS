#include <iostream>
#include "Graph.h"
#include <vector>
using namespace std;

int main(){
	int n;
	cout << "Enter the number of vertex " << endl;
	cin>> n;
	Graph obj(n);
	
	obj.add_edge(0,1);
	obj.add_edge(0,2);
	obj.add_edge(1,2);
	obj.add_edge(2,0);
	obj.add_edge(2,3);
	obj.add_edge(3,3);
	
	int v;
	cout << " start BSF from which vetex " << endl; 
	cin >>  v;
	obj.BSF(v);

	return 0;
}