#include<iostream>

using namespace std;

// y ^ 3 = x, need to find y, input int x, output double y
double func(double x){
    double l = 1;
    double r = x;
    double eps = 0.00000000001;
    while (r - l > eps) {
        cout<< l << " " << r << endl;
        double m = (l + r) / 2.0;
        if (m * m * m > x)
            r = m;
        else
            l = m;   
    }
    // cout<<l;
    return l;
}

int main(){
    double x;
    cin >> x;
    printf("%.10f", func(x));
    return 0;
}