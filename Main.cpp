#include <iostream>
#include "Graph.h"
#include <vector>
using namespace std;

int main(){

	Graph obj(4);
	
	obj.add_edge(0,1);
	obj.add_edge(0,2);
	obj.add_edge(1,2);
	obj.add_edge(2,0);
	obj.add_edge(2,3);
	obj.add_edge(3,3);
	cout << " start BSF " << endl; 
	obj.BSF(2);

	return 0;
}