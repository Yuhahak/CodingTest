#include <iostream>
using namespace std;

int main() {
    string m,w;
    int a,b;
    cin >> a >> m;
    cin >> b >> w;
    if(a >= 19 || b >= 19){
        if(m == "M" || w == "M"){
            cout << "1";
        }
        else{
            cout << 0;
        }
    }
    else{
        cout <<"0";
    }
    return 0;
}