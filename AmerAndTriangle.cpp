#include <iostream>
using namespace std;
int main(){
    long long int a,b,c;
    cin >> a >> b >> c;
    (a*a == (b*b) + (c*c))? cout << "yes" : cout << "no" << endl;
    return 0;
}