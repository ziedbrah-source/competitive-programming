#include <iostream>
using namespace std;

int main() {    
    int numberOfGuys;
    int h;
    cin >> numberOfGuys;
    cin >> h;
    
    int minimumWidth=0;
    int height=0;
    for(int i=0;i<numberOfGuys;i++){
    	cin >> height;
    	
    	if(height>h){
    		minimumWidth+=2;
		}else {
			minimumWidth+=1;
		}
	}
	
	cout << minimumWidth;
	
	

	



    return 0;
}


