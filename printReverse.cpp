#include <iostream>
using namespace std;

int main(){
    long long int number , reversedNumber = 0 ;
    cin >> number;
    while(number != 0)
    {
        reversedNumber = (reversedNumber * 10) + (number % 10);
        number = number / 10;
    }
    cout << reversedNumber;
    return 0;
}