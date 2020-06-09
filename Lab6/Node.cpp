//---------------------------------------------------------------------------

#pragma hdrstop

#include "Node.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
Node::Node(int k, String val) {
	key = k;
    value = val;
	left = right = 0;
	height = 1;
}

Node::~Node() {
	delete left;
	delete right;
}

char Node::GetHeight() {
	return this ? this -> height : 0;
}

int Node::BalanceFactor() {
	return this -> right -> GetHeight() - this -> left -> GetHeight();
}

void Node::FixHeight() {
	char hl = this -> left -> GetHeight();
	char hr = this -> right -> GetHeight();
	this -> height = (hl > hr ? hl : hr) + 1;
}

Node* Node::RotateRight() {
	Node* q = this -> left;
	this -> left = q -> right;
	q -> right = this;
	this -> FixHeight();
	q -> FixHeight();
	return q;
}

Node* Node::RotateLeft() {
	Node* p = this -> right;
	this -> right = p -> left;
	p -> left = this;
	this -> FixHeight();
	p -> FixHeight();
	return p;
}

Node* Node::Balance() {
	this ->FixHeight();
	if( this ->BalanceFactor()==2 )
	{
		if( this -> right ->BalanceFactor() < 0 )
			this->right = this->right -> RotateRight();
		return this -> RotateLeft();
	}
	if( this ->BalanceFactor()==-2 )
	{
		if(this -> left -> BalanceFactor() > 0  )
			this->left = this->left -> RotateLeft();
		return this -> RotateRight();
	}
	return this;
}

Node* Node::Insert(int k, String val) {
	if(!this) return new Node(k, val);
	if(k < this -> key)
		this -> left = this -> left -> Insert(k, val);
	else
		this -> right = this -> right -> Insert(k, val);
	return this -> Balance();
}

Node* Node::Find(int key) {
	if(!this) return NULL;
	else if(key > this -> key) return this -> right -> Find(key);
	else if(key < this -> key) return this -> left -> Find(key);
    else return this;
}

Node* Node::FindMin() {
	return this -> left ? this -> left ->FindMin() : this;
}

Node* Node::RemoveMin() {
	if(this -> left == 0)
		return this -> right;
	this -> left = this -> left -> RemoveMin();
	return this -> Balance();
}

Node* Node::Remove(int k) {
	if( !this ) return 0;
	if( k < this->key )
		this->left = this -> left -> Remove(k);
	else if( k > this->key )
		this->right = this->right->Remove(k);
	else //
	{
		Node* q = this->left;
		Node* r = this->right;
		delete this;
		if( !r ) return q;
		Node* min = r-> FindMin();
		min->right = r -> RemoveMin();
		min->left = q;
		return min -> Balance();
	}
	return this ->Balance();
}

int Node::FindLeftAmount() {
	if(!this) return 0;
	else {
		if(this -> right && this -> left)
			return 2 + this -> left -> FindLeftAmount();
		else if(this -> right && !(this -> left))
			return 1;
		else if(this -> left && !(this -> right))
			return 1 + this ->left -> FindLeftAmount();
        else return 0;
	}
}

