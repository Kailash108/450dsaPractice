// Link: https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, i, k=1;
	cout << "Enter the value of n: ";
	cin >> n;
	cout << "Enter the elements into the array\n";
	int arr[n][n], j, singArr[n+n];
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin >> arr[i][j];
			singArr[k] = arr[i][j];
			k++; 
		}
	}
	sort(singArr, singArr+k);
	cout << "Sorted 2D Array: "
	for(i=1;i<k;i++){
		if(i%n!=0){
			cout << singArr[i] << " ";
		}
		else{
			cout << singArr[i] << "\n";
		}
	}
	return 0;
}
