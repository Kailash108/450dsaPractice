//Link: https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1
#include<iostream>
using namespace std;
int main(){
	int size1, size2, i, j=0;
	cout << "Enter the sizes of the two arrays: ";
	cin >> size1 >> size2;
	int arr1[size1], arr2[size2], final[size1+size2], k;
	cout << "Enter the elements into the array\n";
	for(i=0;i<size1;i++){
		cin >> arr1[i];
		final[j] = arr1[i];
		j++;
	}
	for(i=0;i<size2;i++){
		cin >> arr2[i];
		final[j] = arr2[i];
		j++;
	}
	for(i=0;i<j;i++){
		for(k=i+1;k<j;k++){
			if(final[i] > final[k]){
				int temp;
				temp = final[i];
				final[i] = final[k];
				final[k] = temp;
			}
		}
	}
	cout << "The Merged Array(Sorted) Is: ";
	for(i=0;i<k;i++){
		cout << final[i] << " ";
	}
	return 0;
}
