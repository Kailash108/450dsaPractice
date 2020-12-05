//Link: https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
#include<iostream>
using namespace std;
int main(){
	int size, i, j=0;
	cout << "Enter the size of the array: ";
	cin >> size;
	int array[size], temp, final[size];
	cout << "Enter the elements into the array\n";
	for(i=0;i<size;i++){
		cin >> array[i];
	}
	for(i=0;i<size;i++){
		if(array[i] < 0){
			final[j] = array[i];
			j++;
		}
	}
	for(i=0;i<size;i++){
		if(array[i] >= 0){
			final[j] = array[i];
			j++;
		}
	}
	for(i=0;i<size;i++){
		cout << final[i] << " ";
	}
	return 0;
}
