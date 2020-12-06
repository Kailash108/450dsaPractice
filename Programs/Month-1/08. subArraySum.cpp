//Link: https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
#include<iostream>
using namespace std;
int maxSubArray(int arr[], int size){
	int i, m=0, n=0;
	for(i=0;i<size;i++){
		m = m + arr[i];
		if(m > n){
			n = m;
		}
		if(m < 0){
			m = 0;
		}
	}
	if(n==0){
		cout << -1;
	}
	else{
		cout << n;	
	}
}
int main(){
	int i, size, m=0;
	cout << "Enter the size of the array: ";
	cin >> size;
	cout << "Enter the elements into the array\n";
	int arr[size], n=0;
	for(i=0;i<size;i++){
		cin >> arr[i];
	}
	maxSubArray(arr, size);
	return 0;
}
