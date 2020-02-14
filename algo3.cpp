// C++ program, implementare HeapSort
#include "algo.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>
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