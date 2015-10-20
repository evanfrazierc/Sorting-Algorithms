#include "SortingHelper.h"
#include <math.h>

template <class T>
class Sorting
{
public:
	void selectionsort(T*, int);
	void insertionsort(T*, int);
	void mergesort(T*, int, T*);
	void quicksort(T*, int);
	void merge(T*, int, int, T*);
private:
	int size;
};

template <class T>
void selectionsort(T* data, int size)
{
	// iterate through all elements
	for (int i = 0; i < size; i++){
		T* min = &data[i];
		// compare current element to previous elements
		for (int j = i; j < size; j++){
			if (data[j] < *min){
				min = &data[j];
			}
		}
		Swap(data[i], *min);
	}
}

template <class T>
void insertionsort(T* data, int size)
{
	for (int i = 1; i < size; i++){
		int j = i;
		while ((j > 0) && (data[j] < data[j - 1])){
			Swap(data[j], data[j - 1]);
			j--;
		}
	}
}

template <class T>
void mergesort(T* data, int size, T* temp)
{
	// base case: array contains one element
	if (size > 1){
		int mid = floor((size+1) / 2);
		// divide array into halves
		mergesort(data, mid, temp);
		mergesort(data+mid, size - mid, temp+mid);
		T* left = data;
		T* right = data+mid;
		int l = 0; int r = 0; int s = 0;
		// compare elements in subarrays and swap
		while (l < mid && r < size - mid){
			if (*(left + l) < *(right + r)){
				*(temp + s) = *(left + l);
				l++;
			}
			else{
				*(temp + s) = *(right + r);
				r++;
			}s++;
		}
		// copy values in left subarray to temp array
		for (int i = l; i < mid; i++){
			*(temp + s + i - l) = *(left + i);
		}
		s = s + mid - l;
		// copy values in right subarray to temp array 
		for (int i = r; i < size - mid; i++){
			*(temp + s + i - r) = *(right + i);
		}
		// copy temp to main array
		for (int i = 0; i < size; i++){
			*(data + i) = *(temp + i);
		}
	}
}

template <class T>
void quicksort(T* data, int size)
{
	// base case: array contains one element
	if (size > 1){
		int mid = floor((size + 1) / 2);
		int pivot = 0;
		// choose pivot value from median of three values
		switch (medianof3(data[0], data[mid], data[size-1])){
			case 1: pivot = 0;
				break;
			case 2: pivot = mid;
				break;
			case 3: pivot = size - 1;
				break;
		}
		// move pivot to front of array
		Swap(data[pivot], data[0]);
		int left = 0;
		int right = size - 1;
		// compare elements from both sides of array
		while (left < right){
			while ((left < right) && (data[left] <= data[0])){
				left++;
			}
			while ((left < right) && (data[right] > data[0])){
				right--;
			}
			Swap(data[left], data[right]);
		}
		if (data[left] > data[0]){
			left--;
		}
		Swap(data[0], data[left]);
		// recursively spit array
		quicksort(data, left);
		quicksort(data+left+1, size-left-1);
	}
}
