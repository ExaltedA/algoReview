// Задача №1412. Столбцы   

#include <iostream>
#include <cmath>
using namespace std;



int main(){
    int k, n, m, res=0;
    int arr[751][751];
    int minRow[751], maxColumn[751];
    cout<<"START";
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(minRow[i]> arr[i][j])
                minRow[i] = arr[i][j];

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(maxColumn[j] < arr[i][j])
                maxColumn[j] = arr[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
             if ((arr[i][j] == minRow[i]) && (arr[i][j] == maxColumn[j])) res++;

    cout << res;
    return 0;
}
