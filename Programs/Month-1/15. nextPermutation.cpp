//Link: https://leetcode.com/problems/next-permutation/
/* This was done using STL as doing it normally takes time to break the actual logic */
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size, i;
	cout << "Enter the size of the array: ";
	cin >> size;
	cout << "Enter the elements into the array\n";
	int arr[size];
	for(i=0;i<size;i++){
		cin >> arr[i];
	}
	bool check = next_permutation(arr, arr+size);
	if(check == false){
		cout << "Error\n";
	}
	else{
		for(i=0;i<size;i++){
			cout << arr[i] << " ";	
		}
	}
	return 0;
}
