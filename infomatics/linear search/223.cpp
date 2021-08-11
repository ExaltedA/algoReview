// Задача №223. Линейный поиск - 1

#include <iostream>
using namespace std;

int linear_search(int *arr,int size, int num){
    int cnt = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == num)
            cnt++;
    }
    return cnt;
}

int main(){
    int size, n, num , arr[10000];

    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> n;
        arr[i] = n;
    }
    cin >> num;

    
    cout << linear_search(arr, size, num);

    return 0;
}