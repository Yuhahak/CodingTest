#include <iostream>
using namespace std;

int main() {
    int a;
    bool isTrue = false;
    cin >> a;
    for(int i= 2 ; i < a; i++){
        if(a % i == 0){
            isTrue = true;
            break;
        }
    }
    if(isTrue){
        cout << "C";
    }
    else{
        cout <<"N";
    }
    return 0;
}