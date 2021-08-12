// Задача №227. Максимальный элемент массива

#include <iostream>
#include <cmath>
using namespace std;

int linear_search(int *arr,int size){
    int maxNum = -999;
    for(int i = 0; i < size; i++){
        if(maxNum < arr[i])
           maxNum = arr[i];
        }
    return maxNum;
}

int main(){
    int size, n, num , arr[10000];

    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> n;
        arr[i] = n;
    }

    
    cout<<linear_search(arr, size);

    return 0;
}