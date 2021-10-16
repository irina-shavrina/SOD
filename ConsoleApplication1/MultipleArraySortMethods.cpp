#include "MultipleArraySortMethods.h"
#include <iostream>
using namespace::std;

void MultipleArraySortMethods::insertion_sort(int* array[], const size_t size) {
    int* tmp;

    for (int i = 1; i < size; ++i) {
        for (int j = i; j > 0 && *array[j - 1] > *array[j]; --j) {

            tmp = array[j - 1];

            array[j - 1] = array[j];

            array[j] = tmp;
        }
    }
}
void MultipleArraySortMethods::sort_bubble(int* array[], const size_t size) {
    int* tmp;
    for (int j = size - 1; j >= 0; j--) {
        for (int i = 0; i < j; i++) {
            if (*array[i] > *array[i + 1]) {
                tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
            }
        }
    }
}
void MultipleArraySortMethods::selection_sort(int* arr[], const size_t size) {
    int* tmp;

    for (int i = 0, k = 0; i < size - 1; ++i) {
        k = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (*arr[k] > *arr[j])
                k = j;
        }
        if (k != i) {
            tmp = arr[k];
            arr[k] = arr[i];
            arr[i] = tmp;
        }
    }
}

void MultipleArraySortMethods::merge_sort(int* arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        MultipleArraySortMethods::merge_sort(arr, start, mid);
        MultipleArraySortMethods::merge_sort(arr, mid + 1, end);
        MultipleArraySortMethods::merge(arr, start, mid, end);
    }
}
void MultipleArraySortMethods::quick_sort(int* arr[], int first, int last)
{
    int f = first;
    int l = last;
    int mid = *arr[(f + l) / 2];
    do
    {
        while (*arr[f] < mid) f++;
        while (*arr[l] > mid) l--;
        if (f <= l)
        {
            std::swap(arr[f], arr[l]);
            f++;
            l--;
        }
    } while (f < l);
    if (first < l) MultipleArraySortMethods::quick_sort(arr, first, l);
    if (f < last)MultipleArraySortMethods::quick_sort(arr, f, last);
}

void MultipleArraySortMethods::merge(int* arr[], int start, int middle, int end) {
    int** tmp = new int* [end - start + 1];
    int i = start, j = middle + 1, k = 0;
    while (i <= middle && j <= end) {
        if (*arr[i] <= *arr[j])
        {
            tmp[k] = arr[i];
            k++;
            i++;
        }
        else {
            tmp[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= middle)
    {
        tmp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= end)
    {
        tmp[k] = arr[j];

        k++;
        j++;
    }
    for (int i = start; i <= end; i++) {
        arr[i] = tmp[i - start];
    }

}