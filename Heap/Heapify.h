#pragma once
#include <vector>

Heap buildMaxHeap(std::vector<int>);
void maxHeapify(std::vector<int>);
int parent(int);
int right(int);
int left(int);
void swap(int&, int&);