#include <iostream>
using namespace std;

int main() {
    int a,b ,c;
    bool isFalse = false;
    cin >> a >> b >> c;
    for(int i = a ; i <= b ; i++){
        if(i % c == 0){
            isFalse = true;
            break;
        }
    }

    if(isFalse){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
    return 0;
}