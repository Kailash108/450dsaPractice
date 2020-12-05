#include<iostream> 
using namespace std; 
int main(){   
    int m, n, cnt=0;
  	cin >> m >> n;
  	int arr1[m], arr2[n];
  	for(int k=0;k<m;k++){
  		cin >> arr1[k];	
	}
	for(int k=0;k<n;k++){
  		cin >> arr2[k];	
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(arr1[i] == arr2[j]){
				cout << arr1[i] << " ";
				cnt++;
			}
		}
	}
	cout << "\nCommon Elements are " << cnt;
    return 0; 
} 
