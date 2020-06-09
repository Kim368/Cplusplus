//---------------------------------------------------------------------------

#ifndef NodeH
#define NodeH
#include <vcl.h>
//---------------------------------------------------------------------------
#endif
class Node {
public:
	int key;
	String value;
	Node* left;
	Node* right;
	char height;
	Node(int, String);
	~Node();
	char GetHeight();
	void FixHeight();
	int BalanceFactor();
	int FindLeftAmount();
	Node* RotateRight();
	Node* RotateLeft();
	Node* Balance();
	Node* FindMin();
    Node* Find(int);
    Node* RemoveMin();
	Node* Remove(int);
	Node* Insert(int,String);
};

