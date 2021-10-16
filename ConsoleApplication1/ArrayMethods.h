#pragma once
class ArrayMethods
{
public:
	static int* fillArrayFromTo(int* arr, int n, int from, int to);
	static int* fillArrayByDeacrising(int* arr, int n);
	static int* fillArrayWithTwoNumbers(int* arr, int n);
	static int* fillArrayWithSameNumber(int* arr, int n);

	static int** fillArrayWithAnotherArray(int** toCopy, int heigth, int width);
	static int** createAndFillMultArray(int heigth, int width);
	static void showElems(int* arr[], int rows, int columns);

};

