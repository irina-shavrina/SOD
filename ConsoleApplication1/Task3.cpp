#include "Task3.h"
#include <fstream>
#include <ctime>
#include <chrono>
#include <fstream>
#include "ArrayMethods.h"
#include "Task1.h"
#include <iostream>
#include<string>  
#include "SortMethods.h"
typedef std::chrono::high_resolution_clock Clock;

void Task3::start() {
    int* arr = new int[100000];
    std::ofstream fout;
   
    for (int j = 1; j <= 5; ++j) {
		auto commonSortTimeBegin = Clock::now();
		std::string str(std::to_string(j) + ".txt");
        fout.open(str);
        if (!fout.is_open()) {
            std::cout << "Error";
            continue;
        }
        for (int i = 1000; i <= 100000; i += 1000)
        {
            auto arraySortingTimeBegin = Clock::now();
            Task3::selectSort(ArrayMethods::fillArrayFromTo(arr, i, -1000, 1000), j, i);
            auto arraySortingTimeEnd = Clock::now();
            fout << i << '\t' << std::chrono::duration_cast<std::chrono::milliseconds>(arraySortingTimeEnd - arraySortingTimeBegin).count() << '\n';

        }
	
		auto commonSortTimeEnd = Clock::now();
		std::cout << j << " sort ended in " << std::chrono::duration_cast<std::chrono::milliseconds>(commonSortTimeEnd - commonSortTimeBegin).count() << " ms\n";
        fout.close();

    }
}
void Task3::selectSort(int* arr, int choice, int n) {

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
}
