//Link: https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
#include<iostream>
using namespace std;
int main(){
	int size, i;
	cout << "Enter the size of the array: ";
	cin >> size;
	int arr[size], cnt=0;
	cout << "Enter the elements into the array\n";
	for(i=0;i<size;i++){
		cin >> arr[i];
	}
	for(i=0;i<size;i++){
		i = i+arr[i];
		cnt++;
	}
	cout << "Minimum Steps: " << cnt;
	return 0;
}
