//Link: https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
#include<iostream>
using namespace std;
int main(){
	int i, cnt=0, size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int arr[size], j;
	cout << "Enter the elements into the array\n";
	for(i=0;i<size;i++){
		cin >> arr[i];
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				cnt++;
			}
		}
	} 
	cout << "The Inversion Count: " << cnt << "\n";
	return 0;
}
