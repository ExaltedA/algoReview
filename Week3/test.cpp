#include <iostream>
using namespace std;

int bin_search(int *arr, int size, int num){
    int l = 0, m, r = size -1, res;
    while (l<=r){
        m = l + (r -l) / 2;
        if  (arr[m] == num){
            r = m;
            break;
        }
        else if (arr[m] < num){
            l = m + 1;
        }
        else r = m - 1;

    }
    if (l > size - 1){
        return r;
    }
    else l;
}

int main(){
int arr[] = {2,5,6,7,8,9};
int size = sizeof(arr) / sizeof(*arr);
int num = 2;
cout << bin_search(arr, size, num);

return 0;
}