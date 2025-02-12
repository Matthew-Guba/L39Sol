#include "sort.h"
#include <iostream>
using namespace std;

void bubble_sort(int* array, int size) {

	int count = 0;

	int  size_minus_one = size - 1;

	for (int j = 0; j < size; j++)
	{

		bool flag = true;

		for (int i = 0; i < size - 1 - j; i++)
		{
			if (array[i] < array[i + 1])
			{
				int t = array[i + 1];
				array[i + 1] = array[i];
				array[i] = t;
			}
			count++;
		}
		if (flag) {	
		cout << count << endl;

		break;
		}
	}
}


void selected_sort(int* array, int size) {
	int index = 0;
	int count = 0;
	for (int j = 0; j < size; j++)
	{
		for (int i = j+1; i < size; i++)
		{
			if (array[i] < array[index]) {
				index = i;
				count++;
			}
		}
		
		swap(array[j],array[index]);

	}
	
	cout << count << endl;
}