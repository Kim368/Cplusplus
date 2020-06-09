//---------------------------------------------------------------------------

#ifndef MyStackH
#define MyStackH
#include <vcl.h>
//---------------------------------------------------------------------------
#endif
template<typename T>
class MyStack {
private:
	T *arr;
	int index, max;
public:
    int size;
	//template<typename T>
	MyStack(){
		max = 1000;
		index = -1;
        size = 0;
		arr = new T[max];
	}
	MyStack(int n) {
		if (n < max) max = n;
		else max = 1000;
		index = -1;
		arr = new T[max];
		size = 0;
	}
	//template<typename T>
	~MyStack<T>() {
		delete[] arr;
	}
	//template<typename T>
	bool Push(T symbol) {
		if (index == max) return false;
		else {
			arr[++index] = symbol;
			size++;
			return true;
		}

	}
	//template<typename T>
	T Pop() {
		if(index < 0) return NULL;
		else {
			size--;
			return arr[index--];
		}
	}
	//template<typename T>
	bool IsEmpty() {
		return size <= 0;
	}
	//template<typename T>
	bool IsFull() {
		return !(this -> IsEmpty());
	}
	bool In(T var) {
		for (int i = 0; i < size; i++) {
			if (arr[i] == var) return true;
		}
		return false;
	}
	T& operator[](int ind) {
		return arr[ind];
    }
};
