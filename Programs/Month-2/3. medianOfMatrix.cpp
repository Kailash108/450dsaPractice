// Link: https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
#include<bits/stdc++.h>
using namespace std;
int main(){
	int row, column, i, k=0;
	cout << "Enter the rows and columns: ";
	cin >> row >> column;
	cout << "Enter the elements into the array\n";
	int arr[row][column], j, singArr[row+column];
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			cin >> arr[i][j];
			singArr[k] = arr[i][j];
			k++; 
		}
	}
	sort(singArr, singArr+k);
	cout << singArr[k/2] << endl;
	return 0;
}
