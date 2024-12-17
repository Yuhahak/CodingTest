#include <iostream>
using namespace std;

int main() {
    int a;
    double b, cnt, aver;
    while(true){
        cin >> a;
        if(a >= 30 || a < 20){
            break;
        }
        b += a;
        cnt ++;
    }
    aver = b / cnt;
    cout << fixed;
    cout.precision(2);
    cout << aver;
    return 0;
}