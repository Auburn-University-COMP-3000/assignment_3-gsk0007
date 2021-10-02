#include <iostream>
#include <iomanip>

using namespace std;

int countOccurances(int arr[], int size, int n);
void sortArray(int arr[], int size);

int main() {
	int size = 0;
	int arr[50];
	int temp;

	// Read in the values into an array
	cout << "Enter values ended with -1: ";
	cin >> temp;
	
	while(size<50 && temp!=-1){
		arr[size] = temp;
		size++;
		cin >> temp;
	};

	// display sorted array nums with how many times they appear

	sortArray(arr,size);

	cout << left << setw(10) << "N" << setw(10) << "Count" << endl;
	

	return 0;
}

int countOccurances(int *arr, int size, int n) {
	int count = 0;
	
}

// I used bubble sort since that is covered in the text for this chapter
void sortArray(int *arr, int size) {
	int temp = 0;

	for(int i=0; i<size-1;i++){
		for(int j=1; j<size;j++){
			if(arr[j]<arr[i]){
				temp = arr[j];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}

