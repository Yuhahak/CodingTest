#include <iostream>
using namespace std;

int main() {
    double a,b;
    double c;
    cin >> a >> b;
    c = (a + b) / (a - b);
    cout << fixed;
    cout.precision(2);
    cout << c;
    return 0;
}