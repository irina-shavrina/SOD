#include "Task2.h"
#include <iostream>
#include "MultipleArraySortMethods.h"
#include "ArrayMethods.h"

void Task2::start() {
	int heigth = 5;
	int width = 5;
	auto arr = ArrayMethods::createAndFillMultArray(heigth, width);
	auto copy = ArrayMethods::fillArrayWithAnotherArray(arr, heigth, width);
	ArrayMethods::showElems(arr, heigth, width);

	for (int choice = 1; choice <= 5; ++choice) {
		switch (choice)
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

		Task2::selectSort(arr, choice, heigth);

		std::cout << "After\n";
		ArrayMethods::showElems(arr, heigth, width);

		arr = ArrayMethods::fillArrayWithAnotherArray(copy, heigth, width);

		std::cout << '\n';
	}

}

void Task2::selectSort(int* arr[], int choice, int n) {

	unsigned int start_time = clock(); // початковий час

	switch (choice) {
	case 1: {
		MultipleArraySortMethods::sort_bubble(arr, n);
		break;
	}
	case 2: {
		MultipleArraySortMethods::insertion_sort(arr, n);
		break;
	}
	case 3: {
		MultipleArraySortMethods::selection_sort(arr, n);
		break;
	}
	case 4: {
		MultipleArraySortMethods::quick_sort(arr, 0, n-1);
		break;
	}
	case 5: {
		MultipleArraySortMethods::merge_sort(arr, 0, n-1);
		break;
	}
	default: {
		break;
	}
	}
}
