// C++ program, implementare MergeSort
#include "algo.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T> 
void merge(T begin, T middle, T end, T res) {
	T a = begin;
	T b = middle;
	T r = res;
	while (a < middle && b < end) {
		if (*a < *b) {
			*r++ = *a++;
		}
		else {
			*r++ = *b++;
		}
	}
	while (a < middle) {
		*r++ = *a++;
	}
	while (b < end){
		*r++ = *b++;
	}
	while (begin < end) {
		*begin++ = *res++;
	}
}

template<typename T> 
void mergesort(T begin, T end, T res) {
	int s = end-begin;
	if (s > 1) {
		T middle = begin+s/2;
		mergesort(begin, middle, res);
		mergesort(middle, end, res);
		merge(begin, middle, end, res);
	}
}
