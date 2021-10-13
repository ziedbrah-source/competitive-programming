#include <iostream>
#include <string>


using namespace std; 


int main(){
	int n;
	cin >> n;
	int num1=0;
	int num2=0;
	string StringOne;
	string StringTwo;
	string BasicString;
	
	cin >> StringOne;
	num1++;
	for(int i=0;i<n-1;i++){
		cin >> BasicString;
		if(BasicString==StringOne){
			num1++;
		}else {
			StringTwo=BasicString;
			num2++;
		}
		
	}
	if(num1>num2){
		cout << StringOne << endl;
	}else {
		cout << StringTwo << endl;
	}
	
	
	

	return 0;
}

