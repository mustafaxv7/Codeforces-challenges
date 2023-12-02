#include <iostream>
using namespace std;

int main(){
    int x , a , b ;
    
    cin >> x;
    for(a = 1 ; a <= x ; a++){
        for(b = a ; b <= x ; b+=a ){
            if(a * b  > x && b / a < x){
                cout << a << " " << b;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}