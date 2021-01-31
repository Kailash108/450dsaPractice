https://leetcode.com/problems/search-a-2d-matrix/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int row, column, i;
	cout << "Enter the rows and columns: ";
	cin >> row >> column;
	cout << "Enter the elements into the array\n";
	int arr[row][column], j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			cin >> arr[i][j];
		}
		cout << "\n";
	}
	int element;
	cout << "Enter the search element: ";
	cin >> element;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if(arr[i][j] == element){
				cout << "Element Found at Row: " << i+1 << " && Column: " << j+1 << endl; 
			}
		}
	}
	return 0;
}
