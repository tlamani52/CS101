#include<iostream>
#include<cmath>
using namespace std;
int convertToBase10(int b,int d, int power = 0){
    if(b == 0) return 0;
    return b % 10 * pow(d, power) + convertToBase10(b/ 10, d, power + 1);
}
int reverse(int number, int other = 0){
    if(number == 0) return other;
    return reverse(number / 10, other * 10 + number % 10);
} 
int main(){
    
    cout << convertToBase10(1033, 4) << endl;
    cout << reverse(102);
    return 0;
}
