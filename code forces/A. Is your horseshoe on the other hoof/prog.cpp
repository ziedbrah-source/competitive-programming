#include <iostream>
using namespace std; 
#include <algorithm>
int main(){

	int T[4];
	int number = 3;  
	for(int i=0;i<4;i++){
		cin >> T[i];
	}
	std::sort(T,T+4);
	for(int i=0;i<3;i++){
		if(T[i]!=T[i+1]){
			number--;// mezyen alkhr ...
		}
	}
	cout << number << endl;
	return 0;
}
