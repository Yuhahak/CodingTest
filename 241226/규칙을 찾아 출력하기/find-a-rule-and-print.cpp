#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        if(i == 0 || i == a){
            for(int k = 0 ; k < a ; k++){
                cout << "* ";
            }
        }
        else{
            for(int j = 0 ; j < a ; j++){
                if(i == 0 || i == a){
                    cout << "* ";
                }
                else{
                    if(j < i){
                        cout << "* ";
                    }
                    else{
                        cout << " ";
                    }
                }
            }
        }
        cout << endl;
    }


    return 0;
}