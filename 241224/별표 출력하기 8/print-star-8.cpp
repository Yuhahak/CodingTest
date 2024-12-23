#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 0; i < a ; i++){
        if(i % 2 == 0){
            cout << "*";
            cout<< endl;
        }
        else{
            for(int j = 0 ; j < i + 1; j++){
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}