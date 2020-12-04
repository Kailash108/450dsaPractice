#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size], i, revArray[size], j=0;
    cout << "Input the elements into the array\n";
    for(i=0;i<size;i++){
        cin >> array[i];
    }
    for(i=size-1;i>=0;i--){
        revArray[j] = array[i];
        j++;
    }
    cout << "Reversed Array: ";
    for(i=0;i<size;i++){
        cout << revArray[i] << " ";
    }
    return 0;
}
