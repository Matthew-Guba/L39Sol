#include     <iostream> 				
#include "util.h"
#include <ctime>
#include "sort.h"
using namespace std;

#define SIZE 20

//Самый мощный коммент

int main() {

	srand(time(NULL));

	int array[SIZE] = {10,9,8,7,6,5,4,3,2,1};

	init(array, SIZE, 0, 100);
	cout << "array before bubble sort: " << convert(array,SIZE) << endl;
	//bubble_sort(array, SIZE);
	selected_sort(array, SIZE);

	cout << "array after bubble sort: " << convert(array, SIZE) << endl;
	

	return 0;
}
