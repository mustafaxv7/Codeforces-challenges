#include<iostream>
using namespace std;
int twoFactors(int a , int b);
int main(){
    long long int fact1 , fact2;
    cout<<"\nEnter The Two factors>>: " << endl;
    cin >> fact1 >> fact2;
    cout << twoFactors(fact1,fact2) << "\n"; 
    
    return 0;
}
int twoFactors(int a , int b)
{
    return a + b;
}