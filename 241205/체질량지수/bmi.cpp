#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c;
    c = (10000 * b) / ( a*a);
    cout << c << endl;
    if(c > 25){
        cout << "Obesity";
    }
    return 0;
}