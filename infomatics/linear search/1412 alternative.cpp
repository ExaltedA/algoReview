#include <iostream>
using namespace std; 
 
int arr[101];
int main() {
    long long x, c;
    cin >> x;
    int n, i = 0;
    cin >> n;
    while (cin >> c) {
        if (c == x) {
            arr[i % n]++;
        }
        i++;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}