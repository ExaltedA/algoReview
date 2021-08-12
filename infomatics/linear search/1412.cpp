// Задача №1412. Столбцы   

#include <iostream>
#include <cmath>
using namespace std;

void matrixDecider(int matrix[][101], int size, long long num){
    for(int i = 0; i < size; i++){
        bool isfound = false;
        for(int j = 0; j < size; j++){
                if(matrix[j][i] == num){
                    isfound = true;
                    break;
                }
            }
        if (isfound)
            cout<<"YES\n";
        else cout<<"NO\n";
            
    }
}

int main(){
    int size;
    long long num, n;
    int arr[101][101];
    cin >> num >> size;
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            cin >> arr[i][j];

    matrixDecider(arr, size, num);
    return 0;
}

