#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

template<typename T>
class MinHeap {
private:
	int parent(int x);
	int leftChild(int x);
	int rightChild(int x);
	void swap(T& a, T& b);
	void min_heapify(int i);
	void balance_heap();

public:
	vector<T> arr;
	void insert(T x);
	T get(int index);
};

template <typename T>
void MinHeap<T>::insert(T x) {
	arr.push_back(x);
	balance_heap();
}

template <typename T>
T MinHeap<T>::get(int index) {
	return arr.at(index);
}

template <typename T>
int MinHeap<T>::parent(int x){
	int f = floor(x);
	return f;
}


template <typename T>
int MinHeap<T>::leftChild(int x){
	int c = 2*x;
	return c;
}


template <typename T>
int MinHeap<T>::rightChild(int x){
	int c = (2*x) + 1;
	return c;
}

template <typename T>
void MinHeap<T>::swap(T& a, T& b){
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
void MinHeap<T>::balance_heap(){
	long int s = (arr.size()/2) - 1;

	//for(long int i=s; i>=0; i--){
	//	min_heapify(i);
	//}

	min_heapify(2);
}

template <typename T>
void MinHeap<T>::min_heapify(int i){
	long int l = leftChild(i);
	long int r = rightChild(i);

	long int s = arr.size() - 1; 

	long smallest;
	
	if((l < s) && (arr[l] < arr[i])){
		smallest = l;
	} else {
		smallest = i;
	}

	if((r < s) && (arr[r] < arr[i])){
		smallest = r;
	}

	if(smallest != i){
		swap(arr[i], arr[smallest]);
		min_heapify(smallest);
	}
}



// -----------------------------


int main(){
	MinHeap<int> a;
	a.insert(100);
	a.insert(90);
	a.insert(80);
	a.insert(70);
	a.insert(60);
	a.insert(50);
	a.insert(40);
	a.insert(20);

	for(auto i: a.arr)
		cout << i << endl;

	return 0;
}
