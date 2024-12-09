#include <iostream>
using namespace std;

int main() {
    string m,w;
    int a,b;
    cin >> a >> m;
    cin >> b >> w;
    if((a >= 19 && m == "M")|| (b >= 19 && w == "M")){
        cout << "1";
    }
    else{
        cout <<"0";
    }
    return 0;
}