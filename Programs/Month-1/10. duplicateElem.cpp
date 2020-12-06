//Link: https://leetcode.com/problems/find-the-duplicate-number/
#include<iostream>
using namespace std;
int main(){
	int size, i;
	cout << "Enter the size of the array: ";
	cin >> size;
	int arr[size], j;
	cout << "Enter the elements into the array\n";
	for(i=0;i<size;i++){
		cin >> arr[i];
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i] == arr[j]){
				cout << arr[i] << "\n";
				break;
			}
		}
	}
	return 0;
}
