//Link: https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
#include<iostream>
using namespace std;
int main(){
	int i, size, m=0;
	cout << "Enter the size of the array: ";
	cin >> size;
	cout << "Enter the elements into the array\n";
	int arr[size], n=0;
	for(i=0;i<size;i++){
		cin >> arr[i];
	}
	for(i=0;i<size;i++){
		m = m + arr[i];
		if(m < 0){
			m = 0;
		}
		if(m > n){
			n = m;
		}
	}
	cout << "SubArray Sum is: " << n;
	return 0;
}
