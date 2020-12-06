//Link: https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
#include<iostream>
using namespace std;
int main(){
    int i, size, tc, temp, j, pos;
    cout << "Enter the no. of testcases: ";
    cin >> tc;
    while(tc--){
        cout << "Enter the size of the array: ";
        cin >> size;
        int array[size];
        cout << "Enter the elements into the array\n";
        for(i=1;i<=size;i++){
            cin >> array[i];
        }   
        for(i=1;i<=size;i++){
            for(j=i+1;j<=size;j++){
                if(array[i] > array[j]){
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;   
                }
            }
        }
        cout << "Enter the position: ";
        cin >> pos;
        cout << array[pos] << "\n";
    }
    return 0;
}
