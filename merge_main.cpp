#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
void merge(T begin, T middle, T end, T res) {
	T a = begin, b = middle, r = res;

	while (a < middle && b < end)
		if (*a < *b) *r++ = *a++;
		else *r++ = *b++;

	while (a < middle) *r++ = *a++;
	while (b < end) *r++ = *b++;
	while (begin < end) *begin++ = *res++;
}

template<typename T> 
void mergesort(T begin, T end, T res) {
	int s = end-begin;
	if (s > 1)
	{
		T middle = begin+s/2;
		mergesort(begin, middle, res);
		mergesort(middle, end, res);
		merge(begin, middle, end, res);
	}
}
// citirea si scrierea se face cu indirectare din linia de comanda 
// ./a.out < ./in/test0.in > ./out/test0.in
int main() {		
		int n;
		float x;
		cin >> n;
		float test[n+1], sorted[n+1];
		for(int i = 0; i < n; i++){
			cin >> x;
			test[i] = x;
		}
	    
		mergesort(test, test + n, sorted);

		
		for(int i = 0; i < n; i++){
			cout << sorted[i] << " ";
		}
	
} 
