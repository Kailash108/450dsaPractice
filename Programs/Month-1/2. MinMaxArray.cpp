#include<iostream>
using namespace std;
int main(){
    int i, size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    for(i=0;i<size;i++){
        cin >> array[i];
    }
    int max = array[0], min = array[0];
    for(i=0;i<size;i++){
        if(array[i] > max){
            max = array[i];
        }
        else if(array[i] < min){
            min = array[i];
        }
    }
    cout << "Maximum Number: " << max << "\nMinimum Number: " << min << "\n";
    return 0;
}
