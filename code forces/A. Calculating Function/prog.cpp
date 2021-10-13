#include <iostream>
using namespace std;

int main() {    
    long long n; //http://https//www.youtube.com/watch?v=IByiomshI2o&ab_channel=SolverToBe and long long bech trodha 64bits!
    cin >> n;
    
    if(n%2==0){

    	cout << n/2 << endl;
	}else {

		cout << (n-1)/2 -n;
	}
    

	



    return 0;
}


