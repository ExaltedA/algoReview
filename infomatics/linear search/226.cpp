// Задача №226. Линейный поиск - 3

#include <iostream>
#include <cmath>
using namespace std;

void linear_search(int *arr,int size, int num){
    for(int i = 0; i < size; i++){
        if(arr[i] == num)
            cout<<i+1<<" ";
        }
}

int main(){
    int size, n, num , arr[10000];

    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> n;
        arr[i] = n;
    }
    cin >> num;

    
    linear_search(arr, size, num);

    return 0;
}