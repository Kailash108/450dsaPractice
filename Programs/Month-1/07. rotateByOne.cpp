//Link: https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0
#include<iostream>
using namespace std;
int main(){
	int i, size, tc, j=0;
	cout << "Enter the no. of testcases: ";
	cin >> tc;
	while(tc--){
		cout << "Enter the size of the array: ";
		cin >> size;
		int array[size], final[size];
		cout << "Enter the elements into the array\n";
		for(i=0;i<size;i++){
			cin >> array[i];
		}
		final[0] = array[size-1];
		for(i=0;i<size;i++){
			final[i+1] = array[i];
		}
		for(i=0;i<size;i++){
			cout << final[i] << " ";
		}
		cout << "\n";	
	}
	return 0;	
}
