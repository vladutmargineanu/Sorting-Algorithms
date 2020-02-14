#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
void checkRootNode(vector<T>& array, size_t root, size_t size) {
	size_t left = 2*root;
	size_t right = 2*root + 1;
	if (left < size && array[root] < array[left]) {
		swap(array[root], array[left]);
		checkRootNode(array, left, size);
	}
	if (right < size && array[root] < array[right]) {
		swap(array[root], array[right]);
		checkRootNode(array, right, size);
	}
}

template <typename T>
void buildHeap(vector<T>& array, size_t size) {
	for (size_t i=size/2; i>0; --i) {
		checkRootNode(array, i, size);
	}
}

template <typename T>
void heapSort(vector<T>& array, size_t size) {
	buildHeap(array, size);
	while (size > 1) {
		swap(array[1], array[size-1]);
		checkRootNode(array, 1, --size);
	}
}
// citirea si scrierea se face cu indirectare din linia de comanda 
// ./a.out < ./in/test0.in > ./out/test0.in
	int main() {		
		int n;
		string x;
		vector<string> test;
		cin >> n;

		for(int i = 0; i < n; i++){
			cin >> x;
			test.push_back(x);
		}
	    int size = test.size();
		heapSort(test, size);

		
		for(int i = 0; i < n; i++){
			cout << test[i] << " ";
		}
	
}
