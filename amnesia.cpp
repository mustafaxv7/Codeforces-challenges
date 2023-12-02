#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    if( (c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z')){
        cout << "Alphabet";
    }else{
        cout << "Not alphabet";
    }

    return 0;
}