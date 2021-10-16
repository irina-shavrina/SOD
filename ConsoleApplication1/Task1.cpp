#include "Task1.h"
#include <iostream>
#include "SortMethods.h"
#include "ArrayMethods.h"

void Task1::start() {
	int n = 100000;
	for (int i = 1; i <= 5; ++i) {
		switch (i)
		{
		case 1:
			std::cout << "Bubble:\n";
			break;
		case 2:
			std::cout << "Insertion:\n";
			break;
		case 3:
			std::cout << "Selection:\n";
			break;
		case 4:
			std::cout << "Quick:\n";
			break;
		case 5:
			std::cout << "Merge:\n";
			break;
		default:
			break;
		}
		for (int j = 1; j <= 4; ++j) {
			Task1::selectSort(Task1::selectAndFillArrayMethod(j, n), i, n);
		}
		std::cout << '\n';
	}
}

int* Task1::selectAndFillArrayMethod(int choice, int n) {

	int* arr = new int[n];
	switch (choice) {
		case 1: {
			ArrayMethods::fillArrayFromTo(arr, n, -1000, 1000);
			break;
		}
		case 2: {
			ArrayMethods::fillArrayByDeacrising(arr, n);
			break;
		}
		case 3: {
			ArrayMethods::fillArrayWithTwoNumbers(arr, n);
			break;
		}
		case 4: {
			ArrayMethods::fillArrayWithSameNumber(arr, n);
			break;
		}
		default: {
			break;
		}
	}
	return arr;
}
void Task1::selectSort(int* arr, int choice, int n) {

	unsigned int start_time = clock(); // початковий час

	switch (choice) {
		case 1: {
			SortMethods::sort_bubble(arr, n);
			break;
		}
		case 2: {
			SortMethods::insertion_sort(arr, n);
			break;
		}
		case 3: {
			SortMethods::selection_sort(arr, n);
			break;
		}
		case 4: {
			SortMethods::quick_sort(arr, 0, n);
			break;
		}
		case 5: {
			std::cout << "Merge sort\n";
			SortMethods::merge_sort(arr, 0, n);
			break;
		}
		default: {
			break;
		}
	}
	// кінцевий час
	unsigned int end_time = clock(); 

	// шуканий час
	unsigned int search_time = end_time - start_time;

	std::cout << "Time: " << search_time << "ms\n";
}
