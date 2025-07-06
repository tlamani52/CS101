#include<iostream>
using namespace std;
int convertToBase10(int num, int base){
    if(num < 10) return num; //or if(num == 0) return 0
    return base * convertToBase10(num / 10, 4) + num % 10;
}
int main(){
    cout << convertToBase10(1033, 4);
    return 0;
}
  

