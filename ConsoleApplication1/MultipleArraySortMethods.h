#pragma once
class MultipleArraySortMethods
{
	static void merge(int* arr[], int start, int middle, int end);

public:
	static void sort_bubble(int* array[], const size_t size);
	static void insertion_sort(int* array[], const size_t size);
	static void selection_sort(int* array[], const size_t size);
	static void quick_sort(int* arr[], int first, int last);
	static void merge_sort(int* arr[], int start, int end);

};

