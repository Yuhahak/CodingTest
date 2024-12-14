#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    double sum = 0, aver = 0, cnt = 0;
    for(int i =0 ; i<a; i++){
        int n = 0;
        cin >> n;
        sum += n;
        cnt ++;
    }
    aver = sum / cnt;
    cout << fixed;
    cout.precision(1);
    cout << (int)sum << " " << aver;
    return 0;
}