// Задача №225. Ближайшее число

#include <iostream>
#include <cmath>
using namespace std;

int linear_search(int *arr,int size, int num){
    int cnt = 0;
    int closest = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == num)
            return arr[i];
        else
        {
            if (abs(arr[closest] - num) > abs(arr[i] - num) ){
                closest = i;
            }
        }
    }
    return arr[closest];
}

int main(){
    int size, n, num , arr[10000];

    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> n;
        arr[i] = n;
    }
    cin >> num;

    
    cout<<linear_search(arr, size, num);

    return 0;
}