//Link: https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0
#include<iostream>
using namespace std;
int main(){
	int tot1, tot2, i, j, k=0;
	cout << "Enter the size of the two arrays: ";
	cin >> tot1 >> tot2;
	int array1[tot1], array2[tot2], temp, uni[tot1+tot2];
	cout << "Enter the elements into the array-1\n";
	for(i=0;i<tot1;i++){
		cin >> array1[i];
		uni[k] = array1[i];
		k++;
	}
	cout << "Enter the elements into the array-2\n";
	for(i=0;i<tot2;i++){
		cin >> array2[i];
	}
	for(j=0;j<tot2;j++){
		temp=0;
		for(i=0;i<tot1;i++){
			if(array1[i] == array2[j]){
				temp = 1;
				break;
			}
		}
		if(temp!=1){
			uni[k] = array2[j];
			k++;
			//cout << array2[j] << " ";
		}
	}
	for(i=0;i<k;i++){
		cout << uni[i] << " ";
	}
	return 0;
}
