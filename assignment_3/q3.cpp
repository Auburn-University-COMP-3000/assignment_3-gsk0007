#include <iostream>
#include <iomanip>

using namespace std;

int countOccurances(int arr[], int size, int n);
void sortArray(int arr[], int size);

int main() {
	int size = 0;
	int arr[50];
	int num[50];
	int temp;
	int k;

	// Read in the values into an array
	cout << "Enter values ended with -1: ";
	cin >> temp;
	
	while(size<50 && temp!=-1){
		arr[size] = temp;
		size++;
		cin >> temp;
	};


	// Sort the array
	sortArray(arr,size);

	// display sorted array nums with how many times they appear
	cout << left << setw(10) << "N" << setw(10) << "Count" << endl;
	for(int i = arr[0]; i >= arr[size-1]; i--){
		temp = countOccurances(arr, size, i);
		if(temp != 0){
			cout<< left << setw(10) << i << setw(10) << temp << endl;
		}
	}
	

	return 0;
}

int countOccurances(int *arr, int size, int n) {
	int count = 0;
	for(int i = 0; i<size; i++){
		if(arr[i] == n){
			count ++;
		}
	};
	return count;
}


void sortArray(int *arr, int size) {
	int temp = 0;
	int changesMade;

	do{
		changesMade = 0;
		for(int i=0; i<size-1;i++){
			if(arr[i+1]>arr[i]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				changesMade = 1;
			}
		}
	}while(changesMade != 0);
}

