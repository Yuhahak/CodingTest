#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if(a % 2 != 0 && a % 3 == 0){
        cout << "true";
    }
    else if(a % 2 == 0 && a % 5 == 0){
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}