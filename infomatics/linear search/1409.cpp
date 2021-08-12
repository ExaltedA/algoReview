// Задача №1409. Ревизия    

#include <iostream>
#include <cmath>
using namespace std;

int *linear_search(int *arr,int size){
    int MinNum = min(arr[0], arr[1]);
    int SecondMinNum = max(arr[0], arr[1]);
    for(int i = 0; i < size; i++){
        if(MinNum > arr[i]){
            SecondMinNum = MinNum;
            MinNum = arr[i];
        }
        else if(SecondMinNum > arr[i]){
            SecondMinNum = arr[i];
        }
        
        }
    arr[0] = MinNum;
    arr[1] = SecondMinNum;
    return arr;
}

int main(){
    int size, n, arr[10000];

    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> n;
        arr[i] = n;
    }

    
    int *a = linear_search(arr, size);
    cout<<a[0]<< " " << a[1];
    return 0;
}