#include <iostream>
#include <string>
using namespace std; 





int main(){
	int n,x;
	
	cin >> n >>x;
	long long value;
	long long numberOfpacks=x;
	int numberOfDistress=0;
	string operation;
	for(int i=0;i<n;i++){
		cin >> operation;
		cin >> value;
		if(operation == "+"){
			numberOfpacks+=value;
		}
		if(operation == "-"){
			if(numberOfpacks<value){
				numberOfDistress++;
			}else {
				numberOfpacks-=value;
			}
		}
		
	}
	
	cout << numberOfpacks << " " << numberOfDistress << endl;
	return 0;
}
