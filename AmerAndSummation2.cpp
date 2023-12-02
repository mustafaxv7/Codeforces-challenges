#include <iostream>
using namespace std;

int main(){
    long long int x , y , sum;
    sum = 0;
    cin >> x >> y;
    while (x <= y){
        sum = sum + x;
        x = x + 1;
    }
    cout << sum ;
    return 0;
}

