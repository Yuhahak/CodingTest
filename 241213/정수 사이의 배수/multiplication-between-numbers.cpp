#include <iostream>
using namespace std;

int main() {
    int a,b;
    double sum, cnt;
    double aver;
    sum = 0;
    cnt = 0;
    aver = 0;
    cin >> a >> b;
    for(int i = a; i <= b ; i++){
        if(i % 5 == 0 || i % 7 == 0){
            sum += i;
            cnt++;
        }
    }
    aver = sum / cnt;
    cout << fixed;
    cout.precision(1);
    cout << (int)sum << " " << aver;
    
    return 0;
}