#ifndef ALGO_H
#define ALGO_H

#include <vector>
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

// QuickSort
template <typename T>
size_t MedianOfThree(T &a, T &b, T &c, size_t ai, size_t bi, size_t ci);

template <typename T> 
size_t QuicksortPartition(vector<T> &A, size_t lo, size_t hi);

template <typename T> 
void Quicksort(vector<T> &A, size_t lo, size_t hi);

template <typename T> 
void Quicksort(vector<T> &A);

//MergeSort

template<typename T> 
void merge(T begin, T middle, T end, T res);

template<typename T> 
void mergesort(T begin, T end, T res);

//HeapSort

template <typename T>
void checkRootNode(vector<T>& array, size_t root, size_t size);

template <typename T>
void buildHeap(vector<T>& array, size_t size);

template <typename T>
void heapSort(vector<T>& array, size_t size);

#endif
