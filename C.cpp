#include <iostream>
using namespace std;

#define int long long

signed main() {
    int a;
    cin >> a;
    double b;
    cin >> b;
    int ib = b * 100 + 0.5;
    a *= ib;
    a /= 100;
    cout << a << endl;
    return 0;
}