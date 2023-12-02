#include <iostream>
using namespace std;

int main(){
    char c;
    string fonetic , type , size;
    cin >> c;
    if( (c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z')){
        type = "Alphabet";
        if((c >= 'A' && c <= 'Z' )){
            size = "Upper";
        }else{
            size = "Lower";
        }
        if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
            fonetic = "Vowel";
        }else{
            fonetic = "Consonant";
        }
        cout << type << " " << size << " " << fonetic << endl;
    }else{
        if(c >= '0' && c <= '9' ){
            cout << "Number";
        }else{
            cout << "Special";
        }

    }

    return 0;
}