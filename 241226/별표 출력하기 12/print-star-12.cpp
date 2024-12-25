#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 0 ; i < a; i++){
        cout << "* ";
    }
    cout << endl;
    for(int i =0; i < a -1; i++){
        for(int k = 0 ; k < a - 1; k++){
            if(k % 2 == 0){
                cout << "  ";
            }
            else{
                if(k > i){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}