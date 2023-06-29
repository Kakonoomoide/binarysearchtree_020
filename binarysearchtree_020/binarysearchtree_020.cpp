#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	// Constructor
	Node(string i, Node* I, Node* r)
	{
		info = i;
		leftchild = I;
		rightchild = r;
	}
};

class BinaryTree{
public:
	Node* ROOT;

	BinaryTree(){
		ROOT = NULL; // Initializing ROOT to null
	}

	void insert(string element){ // Insert a node in the binary search tree
		
	}

};


int main(){

}