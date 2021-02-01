// Link: https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1
#include<bits/stdc++.h>
using namespace std;
int main(){
	int row, column, i, k=0;
	cout << "Enter the rows and columns: ";
	cin >> row >> column;
	cout << "Enter the elements into the array\n";
	int arr[row][column], j, count[k];
	for(i=0;i<row;i++){
		int cnt=0;
		for(j=0;j<column;j++){
			cin >> arr[i][j];
			if(arr[i][j]==1){
				cnt++;
			}
			else{
				cnt=0;
			}
		}
		count[k] = cnt;
		k++;
	}
	int max=count[0];
	for(i=0;i<k;i++){
		if(max < count[i]){
			max = count[i];
		}
	}
	cout << max << endl;	
	return 0;
}
