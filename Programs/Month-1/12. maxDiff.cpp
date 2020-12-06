//Link: https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
#include<iostream>
using namespace std;
int main(){
	int size, i;
	cout << "Enter the size of the array: ";
	cin >> size;
	int arr[size], k;
	cout << "Enter the elements into the array\n";
	for(i=0;i<size;i++){
		cin >> arr[i];
	}
	cout << "Enter the value of K: ";
	cin >> k;
	for(i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;	
			}
		}
	}
	int big = arr[size-1] - k;
	int small = arr[0] + k;
	cout << "Max Difference: " << big - small;
	return 0;
}
