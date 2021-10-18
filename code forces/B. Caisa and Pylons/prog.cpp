#include <iostream>
#include <math.h>
using namespace std; 


int main(){
	int energy=0;
	int money=0;
	int n;
	cin >> n;
	int array[n+1];
	array[0]=0;
	for(int i=1;i<=n;i++){
		cin >> array[i];
	}
	
	for(int i=0;i<=n-1;i++){
		energy+=array[i]-array[i+1];
		if(energy<0){
			money+=abs(energy);
			energy=0;
		}
	}
	
	cout << money;
	
	

	return 0;
}

