//Link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
#include<iostream>
using namespace std;
int sort012(int array[], int size){
    int i, j, temp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(i=0;i<size;i++){
        cout << array[i] << " "; 
    }
}
int main(){
    int size, i;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    cout << "Enter the elements into the array\n";
    for(i=0;i<size;i++){
        cin >> array[i];
    }
    sort012(array, size);
    return 0;
}
