#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter height: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << " ";
         }
	 for(int k = 1; k <= 2 * i - 1; k++){
             if(k % 2 != 0){
		 cout << "*";
             }else{ cout << " ";	    
	     } 
         }
	 cout << endl;
    } 
    return 0;
}
