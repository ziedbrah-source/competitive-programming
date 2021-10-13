#include <iostream>

using namespace std;

int main() {    
    
    int i=0;
    int n;
     string str;
    cin >> n;
    while(i<n){
   
    cin >> str;
    int length=str.length();
    if(length<=10){
    	cout << str << endl;
	}else {
	std::string s=std::to_string(length-2);		
		cout << str[0]+s+str[length-1]<< endl;
	}
	i++;
	}
	



    return 0;
}


