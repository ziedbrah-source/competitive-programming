#include <iostream>
using namespace std;

int main() {    
    int a; 
    int b ;
    cin >> a;
    cin >> b;
    int year=0;
    while(a<=b){
    	year++;
    	a=a*3;
    	b=b*2;
	}
	cout << year;
	



    return 0;
}


