#include<iostream> 
using namespace std;
	
	int main(){
		int x, y; 
		cout << "please eneter a whole number for x and y:" << endl << endl;	
		cout << "first, choose a number for x:" << endl;
		cin >> x;
		cout << "Next choose a number y:" << endl;
		cin >> y;  
		cout << "for x, you have chosen:" << x << endl << endl;
		cout << "for y, you have chosen:" << y << endl << endl;

	        cout << x + y << endl << endl;
		cout << y - x << endl << endl;
		cout << x * y << endl << endl;
		cout <<(x + y)/2 << endl << endl;
		cout << x % y << endl;
		return 0;
}
