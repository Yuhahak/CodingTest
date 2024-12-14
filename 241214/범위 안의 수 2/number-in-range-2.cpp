#include <iostream>
using namespace std;

int main() {
    double a, sum, aver, cnt;
    sum = 0;
    aver = 0;
    cnt = 0;
    for(int i = 0 ; i < 10 ; i++){
        cin >> a;
        if(a >= 0 && a <= 200){
            sum += a;
            cnt++;
        }
    }
    aver = sum / cnt;
    cout << fixed;
    cout.precision(1);
    cout << (int)sum << " " << aver ;
    return 0;
}