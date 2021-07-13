#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int bind_search(int *arr, int size, int num){
    int l = 0, m, r = size - 1, res;
    while(l <= r)
    {
        m = l + (r - l) / 2;
        if(arr[m] == num)
        {
            r = m;
            break;
        }
        else if(arr[m] < num) l = m + 1;
        else r = m - 1;
    }
    if(r >= 0 && l <= size - 1) return fabs(num-arr[r]) <= fabs(num-arr[l]) ? r : l;
    else if(l > size - 1) return r;
    else return l;
}



int main(){
    int n,k;
    cin >> n >> k;
    
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int result = bind_search(a ,n ,k);
    cout<<result;
    
    return 0;
}