#include <iostream>
using namespace std;

int main() {    
    int n;
    cin >> n;
    int one,two,three;
    int NumberOfWriteups=0;
    for(int i=0;i<n;i++){
    	cin >> one ;
    	cin >> two ;
    	cin >> three;
    
    	
    	if(one + two +three >= 2) {
    		NumberOfWriteups++;
		}
    	
	}
	
	cout << NumberOfWriteups;
    

	



    return 0;
}


