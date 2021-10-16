#include <iostream>
#include <cstdlib>
#include <ctime>
#include "SortMethods.h"
#include "ArrayMethods.h"
using namespace std;

void print(int* a, int n);
void selectSort(int* arr, int choice, int n);
void process();
int* selectAndFillArrayMethod(int choice, int n);
int main() {
	setlocale(LC_ALL, "Russian");
	
	process();

	system("pause");
	return 0;
}

// Друк елементів масиву
void print(int* a, int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
	cout << endl;
}

void process() {
	int n = 25000;
	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <= 4; ++j) {
			selectSort(selectAndFillArrayMethod(j, n), i, n);
		}
	}
}
int* selectAndFillArrayMethod(int choice, int n) {

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
void selectSort(int* arr, int choice, int n) {

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
			SortMethods::merge_sort(arr, 0, n);
			break;
		}
		default: {
			break;
		}
	}
	unsigned int end_time = clock(); // кінцевий час

		// шуканий час
	unsigned int search_time = end_time - start_time;

	cout << "\nЧас роботи програми методом " << choice << " : " << search_time << "ms\n\n";
}
