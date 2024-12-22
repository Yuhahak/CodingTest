#include <iostream>
using namespace std;

int main() {
    int a,b,c= 0;
    cin >> a;
    b= a;
    for(int i = 1; i <=a ;i++){
        for(int j = 1; j<= b ; j++){
            cout << "*";
        }
        for(int p =0; p < c ; p++){
            cout << " ";
        }

        for(int k =0; k < c ; k++){
            cout << " ";
        }
        for(int o = 1; o<= b ; o++){
            cout << "*";
        }
        cout << endl;
        b--;
        c++;
    }
    return 0;
}