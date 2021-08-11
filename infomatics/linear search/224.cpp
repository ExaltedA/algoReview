// Задача №224. Линейный поиск - 2

#include <iostream>
using namespace std;

bool linear_search(int *arr,int size, int num){
    int cnt = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == num)
           return true;
    }
    return false;
}

int main(){
    int size, n, num , arr[10000];

    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> n;
        arr[i] = n;
    }
    cin >> num;

    
    if (linear_search(arr, size, num)){
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}