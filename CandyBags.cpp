#include <iostream>
using namespace std;

int main(){
    long long int bagOne , bagTwo;
    cin >> bagOne >> bagTwo;
    if (bagOne == bagTwo){
        cout << "Yes";
    }else{
        ((bagTwo - bagOne) % 2 == 0)? cout << "Yes" : cout << "No";
    }
    
       
    return 0;
}