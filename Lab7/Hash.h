//---------------------------------------------------------------------------

#ifndef HashH
#define HashH
#include <vcl.h>
#include <string>
#include "Stack.h"
//---------------------------------------------------------------------------
#endif
template<typename T>
class Hash {
private:
	class Node {
	public:
		int key;
		T value;

		Node(int key, T value) {
			this -> key = key;
			this -> value = value;
		}

		Node() {}
	};

	int GetHashCode(int k)
	{
		return k % size;
	}

public:
	int size;
	MyStack<Node>* arr;

	Hash()
	{
		this->size = 20;
		arr = new MyStack<Node>[size];
	}

	Hash(int size) {
		this -> size = size;
		arr = new MyStack<Node>[size];
	}

	~Hash() {
        delete[] arr;
	}

	void insert(int key, T value) {
		int index = GetHashCode(key);
		arr[index].Push(Node(key, value));
	}

	int GetMaxKey() {
		int array[10] {0,0,0,0,0,0,0,0,0,0};
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < arr[i].size; j++) {
				array[arr[i][j].key % size]++;
			}
		}
		int max = 0;
		int index = -1;
		for (int i = 0; i < 10; i++) {
			if(max < array[i]) {
				max = array[i];
				index = i;
			}
		}
        if(index == 0) return 10;
        return index;
	}

	void View(TMemo* Memo) {
		 Memo -> Lines -> Clear();
		 for(int i = 0; i < size; i++) {
			 std::string str = "";
			 str += std::to_string(i);
			 for (int j = 0; j < arr[i].size; j++) {
				 str += "--> ";
				 str += std::to_string(arr[i][j].key);
			 }
			 Memo -> Lines -> Add(str.c_str());
		 }
	}
};