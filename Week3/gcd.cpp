#include<iostream>

using namespace std;

int gcd(int a, int b){
    if (a==0 || b==0){
        return a + b; 
    }
    return gcd(b, a % b); // if a > b, its ok cuz a%b is still a
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b);
    return 0;
}