#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool isTrue;
    cin >> a >> b >> c;
    for(int i = a ; i <= b ;i++){
        if(i % c == 0){
            isTrue = true;
            break;
        }
    }

    if(isTrue){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}