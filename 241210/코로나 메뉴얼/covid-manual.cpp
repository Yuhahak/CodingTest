#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    string q,w,e;
    cin >> q >> a;
    cin >> w >> b;
    cin >> e >> c;
    int result = 0;
    if(a >= 37 && q == "Y"){
        result++;
    }
    if(b >= 37 && w == "Y"){
        result++;
    }
    if(c >= 37 && e == "Y"){
        result++;
    }

    if(result >= 2){
        cout << "E";
    }
    else{
        cout << "N";
    }
    return 0;
}