#include <iostream>
using namespace std;

int main(){
    long long int n, validPairs ,i , j;
    validPairs = 0;
    i = 1;
    j = i+1;
    cin >> n;
    while(i < n && i >= 1){
        while(j < n && j >= 1){
            if(i + j == n){
               validPairs++;
            }
            j++;
        }
        j = i + 1;
        i++;
    }
    cout << validPairs;
    return 0;
}