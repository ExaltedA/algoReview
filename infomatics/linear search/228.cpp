// Задача №228. Номер максимального элемента массива

#include <iostream>
#include <cmath>
using namespace std;

int linear_search(int *arr,int size){
    int indexMaxNum = 0;
    for(int i = 0; i < size; i++){
        if(arr[indexMaxNum] < arr[i])
           indexMaxNum = i;
        }
    return indexMaxNum + 1;
}

int main(){
    int size, n, arr[10000];

    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> n;
        arr[i] = n;
    }

    
    cout<<linear_search(arr, size);

    return 0;
}