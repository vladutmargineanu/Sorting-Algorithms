#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <stdexcept>
using namespace std;

template <typename T> 
size_t MedianOfThree(T &a, T &b, T &c, size_t ai, size_t bi, size_t ci) {
	if (a >= b && a <= c)
		return ai;
	if (b >= a && b <= c)
		return bi;
	return ci;
}

template <typename T> 
size_t QuicksortPartition(vector<T> &A, size_t lo, size_t hi) {
	size_t ci = (int)(0.5*(lo+hi)+0.5);
	size_t pivotIndex = MedianOfThree(A[lo], A[ci], A[hi], lo, ci, hi);
	T pivot = A[pivotIndex];

	size_t i = lo;
	size_t j = hi;
	while(true) {
		while(A[i] <= pivot && i < pivotIndex) i++;
		while(A[j] >= pivot && j > pivotIndex) j--;
		if (i == pivotIndex && j == pivotIndex)
			return pivotIndex;

		T tmp = A[i];
		A[i] = A[j];
		A[j] = tmp;

		if(i == pivotIndex)
			pivotIndex = j;
		else if(j == pivotIndex)
			pivotIndex = i;
	}
}

template <typename T> 
void Quicksort(vector<T> &A, size_t lo, size_t hi) {
	if (lo < hi)
	{
		size_t p = QuicksortPartition<T>(A, lo, hi);
		if (p > 0) //p is unsigned, so prevent negative
			Quicksort<T>(A, lo, p-1);
		Quicksort<T>(A, p+1, hi);
	}
}

template <typename T>
void Quicksort(vector<T> &A) {
	if (A.size() <= 1)
		return; //Nothing to do
	Quicksort(A, 0, A.size()-1);
}


// citirea si scrierea se face cu indirectare din linia de comanda 
// ./a.out < ./in/test0.in > ./out/test0.in
int main() {		
		int n;
		float x;
		vector<float> test;
		cin >> n;

		for(int i = 0; i < n; i++){
			cin >> x;
			test.push_back(x);
		}
	
		Quicksort(test);

		for(int i = 0; i < n; i++){
			cout << test[i] << " ";
		}
	
}