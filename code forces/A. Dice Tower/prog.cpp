#include <iostream>
#include <math.h>

using namespace std; 


int main(){
	int n,k,x,y;
	
	cin >> n >> k;

	for(int i=0;i<n;i++){
		cin >> x >> y; /* ken fama fi jiha wala fama el complementaire mte3ou fi jiha l'okhra , raw maadch unique biensur khater nwaliw nejmou n7otou eli nhebou.
						w zid mech kol mara nhotou el k mara okhra ala khater awalan ken wahda mech unique el kol mech unique 
						w zid ken lowel unique bech yab9a nafs les deux nombres eli nlawjou alehom
					*/
		if(k==x || k==7-x || k==y || k==7-y){
			cout << "NO"; return 0;
		}


		
	}
	
	cout << "YES";

	
	
	

	return 0;
}

