#include <iostream>
using namespace std;

int main(){
    long long int number;
    bool prime = true;
    cin >> number;
    for(int i = 2 ; i < number ; i++)
    {
        if(number % i == 0){
            prime = false;
        }
    }
    if(prime){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}