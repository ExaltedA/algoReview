#include <iostream>

using namespace std;
// Simple prime finding algorithm
int main(){
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++){ // as 1 is not prime
       int k = 0;
       for (int j = 2; j * j <= i; j++)
           if (i % j == 0){
               k = 1;
               break;
           }
        if (k==0)
            cout << i << " ";
        
    }
// Very primitive algorithm, as it can be further modified using 
// The Sieve of Eratosthenes

    return 0;
}