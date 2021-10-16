#include "ArrayMethods.h"
#include <stdlib.h>
#include <iostream>

int* ArrayMethods::fillArrayFromTo(int* arr, int n, int from, int to) {
	for (int i = 0; i < n; i++)
		arr[i] = rand() % (to - from + 1) + from;

	return arr;
}
 int* ArrayMethods::fillArrayByDeacrising(int* arr, int n) {
	for (int i = 0 , value = n; i < n; ++i,--value)
		arr[i] = value;

	return arr;
}

 int* ArrayMethods::fillArrayWithTwoNumbers(int* arr, int n) {
	for (int i = 0; i < n; ++i)
		arr[i] = rand() % 2;

	return arr;
}

 int* ArrayMethods::fillArrayWithSameNumber(int* arr, int n) {
	for (int i = 0; i < n; ++i)
		arr[i] = 0;

	return arr;
}
 int** ArrayMethods::createAndFillMultArray(int heigth, int width) {
	 int** arr = new int* [heigth];

	 for (int i = 0; i < heigth; ++i) {
		 arr[i] = new int[width];
		 for (int j = 0; j < width; ++j)
			 arr[i][j] = rand() % 10;
	 }
	 return arr;
 } 
 int** ArrayMethods::fillArrayWithAnotherArray(int** toCopy, int heigth, int width) {
	 int** arr = new int* [heigth];

	 for (int i = 0; i < heigth; ++i) {
		 arr[i] = new int[width];
		 for (int j = 0; j < width; ++j)
			 arr[i][j] = toCopy[i][j];
	 }
	 return arr;
 }
 void ArrayMethods::showElems(int* arr[], int rows, int columns) {
	 for (int i = 0; i < rows; ++i) {
		 for (int j = 0; j < columns; ++j)
			 std::cout << arr[i][j] << " ";
		 std::cout << '\n';

	 }
 }