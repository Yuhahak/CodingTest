#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 0 ; i < (2 * a) + 1 ; i++){
        if(i % 2 == 0){
            for(int j = 0 ; j < (2 * a) + 1 ; j++){
                cout << "* ";
            }
        }
        else{
            for(int k = 0 ; k < (2 * a) + 1 ; k ++){
                if(k % 2 == 0){
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