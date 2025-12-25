#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, temp, sum = 0, digit;
    cin >> n;
    temp = n;
    while(n > 0){
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    if(sum == temp)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";
    return 0;
}
